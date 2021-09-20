package channeld

import (
	"log"
	"strings"
	"time"

	"clewcat.com/channeld/proto"
	protobuf "google.golang.org/protobuf/proto"
	"google.golang.org/protobuf/reflect/protoreflect"
	"google.golang.org/protobuf/reflect/protoregistry"
)

type ChannelDataMessage = protoreflect.Message

type ChannelData struct {
	msgType proto.MessageType
	msg     ChannelDataMessage
}

func NewChannelData(channelType proto.ChannelType) *ChannelData {
	channelTypeName := string(channelType.Descriptor().Name())
	dataTypeName := strings.Title(channelTypeName) + "ChannelDataMessage"
	dataType, err := protoregistry.GlobalTypes.FindMessageByName(protoreflect.FullName(dataTypeName))
	if err != nil {
		log.Panicln("Failed to create data for channel type ", channelTypeName)
	}
	msgTypeName := "CHANNEL_DATA_" + strings.ToUpper(channelTypeName)
	msgType, exists := proto.MessageType_value[msgTypeName]
	if !exists {
		log.Panicln("Can't find data update message type by name ", msgTypeName)
	}
	return &ChannelData{
		msgType: proto.MessageType(msgType),
		msg:     dataType.New(),
	}
}

func (d *ChannelData) Update(updateMsg Message, cs *ChannelSubscription) {
	protobuf.Merge(d.msg.Interface(), updateMsg)
	if cs.fanOutDataMsg == nil {
		cs.fanOutDataMsg = updateMsg
	} else {
		protobuf.Merge(cs.fanOutDataMsg, updateMsg)
	}
}

func (ch *Channel) tickData(dt time.Duration) {
	for connId, cs := range ch.subscribedConnections {
		if cs.options.Frequency <= 0 || time.Now().After(cs.lastFanOutTime.Add(time.Second/time.Duration(cs.options.Frequency))) {
			GetConnection(connId).SendWithChannel(ch.id, ch.Data().msgType, cs.fanOutDataMsg)
			cs.lastFanOutTime = time.Now()
		}
	}
}

func (d *ChannelData) FanOutDataUpdate() {

}
