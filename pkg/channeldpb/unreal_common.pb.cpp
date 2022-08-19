// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: unreal_common.proto

#include "unreal_common.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace channeldpb {
PROTOBUF_CONSTEXPR FVector::FVector(
    ::_pbi::ConstantInitialized)
  : x_(0)
  , y_(0)
  , z_(0){}
struct FVectorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FVectorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FVectorDefaultTypeInternal() {}
  union {
    FVector _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FVectorDefaultTypeInternal _FVector_default_instance_;
PROTOBUF_CONSTEXPR SceneComponentState::SceneComponentState(
    ::_pbi::ConstantInitialized)
  : attachsocketname_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , relativelocation_(nullptr)
  , relativerotation_(nullptr)
  , relativescale_(nullptr)
  , removed_(false)
  , isvisible_(false){}
struct SceneComponentStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SceneComponentStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SceneComponentStateDefaultTypeInternal() {}
  union {
    SceneComponentState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SceneComponentStateDefaultTypeInternal _SceneComponentState_default_instance_;
}  // namespace channeldpb
static ::_pb::Metadata file_level_metadata_unreal_5fcommon_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_unreal_5fcommon_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_unreal_5fcommon_2eproto = nullptr;

const uint32_t TableStruct_unreal_5fcommon_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::channeldpb::FVector, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::channeldpb::FVector, x_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::FVector, y_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::FVector, z_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, removed_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, relativelocation_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, relativerotation_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, relativescale_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, isvisible_),
  PROTOBUF_FIELD_OFFSET(::channeldpb::SceneComponentState, attachsocketname_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::channeldpb::FVector)},
  { 9, -1, -1, sizeof(::channeldpb::SceneComponentState)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::channeldpb::_FVector_default_instance_._instance,
  &::channeldpb::_SceneComponentState_default_instance_._instance,
};

const char descriptor_table_protodef_unreal_5fcommon_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023unreal_common.proto\022\nchanneldpb\"*\n\007FVe"
  "ctor\022\t\n\001x\030\001 \001(\002\022\t\n\001y\030\002 \001(\002\022\t\n\001z\030\003 \001(\002\"\335\001"
  "\n\023SceneComponentState\022\017\n\007removed\030\001 \001(\010\022-"
  "\n\020relativeLocation\030\002 \001(\0132\023.channeldpb.FV"
  "ector\022-\n\020relativeRotation\030\003 \001(\0132\023.channe"
  "ldpb.FVector\022*\n\rrelativeScale\030\004 \001(\0132\023.ch"
  "anneldpb.FVector\022\021\n\tisVisible\030\005 \001(\010\022\030\n\020a"
  "ttachSocketName\030\006 \001(\tB.Z,channeld.clewca"
  "t.com/channeld/pkg/channeldpbb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_unreal_5fcommon_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_unreal_5fcommon_2eproto = {
    false, false, 357, descriptor_table_protodef_unreal_5fcommon_2eproto,
    "unreal_common.proto",
    &descriptor_table_unreal_5fcommon_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_unreal_5fcommon_2eproto::offsets,
    file_level_metadata_unreal_5fcommon_2eproto, file_level_enum_descriptors_unreal_5fcommon_2eproto,
    file_level_service_descriptors_unreal_5fcommon_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_unreal_5fcommon_2eproto_getter() {
  return &descriptor_table_unreal_5fcommon_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_unreal_5fcommon_2eproto(&descriptor_table_unreal_5fcommon_2eproto);
namespace channeldpb {

// ===================================================================

class FVector::_Internal {
 public:
};

FVector::FVector(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:channeldpb.FVector)
}
FVector::FVector(const FVector& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
  // @@protoc_insertion_point(copy_constructor:channeldpb.FVector)
}

inline void FVector::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&x_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&z_) -
    reinterpret_cast<char*>(&x_)) + sizeof(z_));
}

FVector::~FVector() {
  // @@protoc_insertion_point(destructor:channeldpb.FVector)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FVector::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FVector::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FVector::Clear() {
// @@protoc_insertion_point(message_clear_start:channeldpb.FVector)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&z_) -
      reinterpret_cast<char*>(&x_)) + sizeof(z_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FVector::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float z = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FVector::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:channeldpb.FVector)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  // float z = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_z = this->_internal_z();
  uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(3, this->_internal_z(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:channeldpb.FVector)
  return target;
}

size_t FVector::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:channeldpb.FVector)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    total_size += 1 + 4;
  }

  // float y = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    total_size += 1 + 4;
  }

  // float z = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_z = this->_internal_z();
  uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FVector::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    FVector::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FVector::GetClassData() const { return &_class_data_; }

void FVector::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<FVector *>(to)->MergeFrom(
      static_cast<const FVector &>(from));
}


void FVector::MergeFrom(const FVector& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:channeldpb.FVector)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_x = from._internal_x();
  uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    _internal_set_x(from._internal_x());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_y = from._internal_y();
  uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    _internal_set_y(from._internal_y());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_z = from._internal_z();
  uint32_t raw_z;
  memcpy(&raw_z, &tmp_z, sizeof(tmp_z));
  if (raw_z != 0) {
    _internal_set_z(from._internal_z());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FVector::CopyFrom(const FVector& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:channeldpb.FVector)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FVector::IsInitialized() const {
  return true;
}

void FVector::InternalSwap(FVector* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FVector, z_)
      + sizeof(FVector::z_)
      - PROTOBUF_FIELD_OFFSET(FVector, x_)>(
          reinterpret_cast<char*>(&x_),
          reinterpret_cast<char*>(&other->x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata FVector::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_unreal_5fcommon_2eproto_getter, &descriptor_table_unreal_5fcommon_2eproto_once,
      file_level_metadata_unreal_5fcommon_2eproto[0]);
}

// ===================================================================

class SceneComponentState::_Internal {
 public:
  static const ::channeldpb::FVector& relativelocation(const SceneComponentState* msg);
  static const ::channeldpb::FVector& relativerotation(const SceneComponentState* msg);
  static const ::channeldpb::FVector& relativescale(const SceneComponentState* msg);
};

const ::channeldpb::FVector&
SceneComponentState::_Internal::relativelocation(const SceneComponentState* msg) {
  return *msg->relativelocation_;
}
const ::channeldpb::FVector&
SceneComponentState::_Internal::relativerotation(const SceneComponentState* msg) {
  return *msg->relativerotation_;
}
const ::channeldpb::FVector&
SceneComponentState::_Internal::relativescale(const SceneComponentState* msg) {
  return *msg->relativescale_;
}
SceneComponentState::SceneComponentState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:channeldpb.SceneComponentState)
}
SceneComponentState::SceneComponentState(const SceneComponentState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  attachsocketname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    attachsocketname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_attachsocketname().empty()) {
    attachsocketname_.Set(from._internal_attachsocketname(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_relativelocation()) {
    relativelocation_ = new ::channeldpb::FVector(*from.relativelocation_);
  } else {
    relativelocation_ = nullptr;
  }
  if (from._internal_has_relativerotation()) {
    relativerotation_ = new ::channeldpb::FVector(*from.relativerotation_);
  } else {
    relativerotation_ = nullptr;
  }
  if (from._internal_has_relativescale()) {
    relativescale_ = new ::channeldpb::FVector(*from.relativescale_);
  } else {
    relativescale_ = nullptr;
  }
  ::memcpy(&removed_, &from.removed_,
    static_cast<size_t>(reinterpret_cast<char*>(&isvisible_) -
    reinterpret_cast<char*>(&removed_)) + sizeof(isvisible_));
  // @@protoc_insertion_point(copy_constructor:channeldpb.SceneComponentState)
}

inline void SceneComponentState::SharedCtor() {
attachsocketname_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  attachsocketname_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&relativelocation_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&isvisible_) -
    reinterpret_cast<char*>(&relativelocation_)) + sizeof(isvisible_));
}

SceneComponentState::~SceneComponentState() {
  // @@protoc_insertion_point(destructor:channeldpb.SceneComponentState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SceneComponentState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  attachsocketname_.Destroy();
  if (this != internal_default_instance()) delete relativelocation_;
  if (this != internal_default_instance()) delete relativerotation_;
  if (this != internal_default_instance()) delete relativescale_;
}

void SceneComponentState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SceneComponentState::Clear() {
// @@protoc_insertion_point(message_clear_start:channeldpb.SceneComponentState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  attachsocketname_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && relativelocation_ != nullptr) {
    delete relativelocation_;
  }
  relativelocation_ = nullptr;
  if (GetArenaForAllocation() == nullptr && relativerotation_ != nullptr) {
    delete relativerotation_;
  }
  relativerotation_ = nullptr;
  if (GetArenaForAllocation() == nullptr && relativescale_ != nullptr) {
    delete relativescale_;
  }
  relativescale_ = nullptr;
  ::memset(&removed_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&isvisible_) -
      reinterpret_cast<char*>(&removed_)) + sizeof(isvisible_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SceneComponentState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool removed = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          removed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .channeldpb.FVector relativeLocation = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_relativelocation(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .channeldpb.FVector relativeRotation = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_relativerotation(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .channeldpb.FVector relativeScale = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_relativescale(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool isVisible = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          isvisible_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string attachSocketName = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_attachsocketname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "channeldpb.SceneComponentState.attachSocketName"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SceneComponentState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:channeldpb.SceneComponentState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool removed = 1;
  if (this->_internal_removed() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_removed(), target);
  }

  // .channeldpb.FVector relativeLocation = 2;
  if (this->_internal_has_relativelocation()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::relativelocation(this),
        _Internal::relativelocation(this).GetCachedSize(), target, stream);
  }

  // .channeldpb.FVector relativeRotation = 3;
  if (this->_internal_has_relativerotation()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::relativerotation(this),
        _Internal::relativerotation(this).GetCachedSize(), target, stream);
  }

  // .channeldpb.FVector relativeScale = 4;
  if (this->_internal_has_relativescale()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::relativescale(this),
        _Internal::relativescale(this).GetCachedSize(), target, stream);
  }

  // bool isVisible = 5;
  if (this->_internal_isvisible() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_isvisible(), target);
  }

  // string attachSocketName = 6;
  if (!this->_internal_attachsocketname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_attachsocketname().data(), static_cast<int>(this->_internal_attachsocketname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "channeldpb.SceneComponentState.attachSocketName");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_attachsocketname(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:channeldpb.SceneComponentState)
  return target;
}

size_t SceneComponentState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:channeldpb.SceneComponentState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string attachSocketName = 6;
  if (!this->_internal_attachsocketname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_attachsocketname());
  }

  // .channeldpb.FVector relativeLocation = 2;
  if (this->_internal_has_relativelocation()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *relativelocation_);
  }

  // .channeldpb.FVector relativeRotation = 3;
  if (this->_internal_has_relativerotation()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *relativerotation_);
  }

  // .channeldpb.FVector relativeScale = 4;
  if (this->_internal_has_relativescale()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *relativescale_);
  }

  // bool removed = 1;
  if (this->_internal_removed() != 0) {
    total_size += 1 + 1;
  }

  // bool isVisible = 5;
  if (this->_internal_isvisible() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SceneComponentState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    SceneComponentState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SceneComponentState::GetClassData() const { return &_class_data_; }

void SceneComponentState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<SceneComponentState *>(to)->MergeFrom(
      static_cast<const SceneComponentState &>(from));
}


void SceneComponentState::MergeFrom(const SceneComponentState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:channeldpb.SceneComponentState)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_attachsocketname().empty()) {
    _internal_set_attachsocketname(from._internal_attachsocketname());
  }
  if (from._internal_has_relativelocation()) {
    _internal_mutable_relativelocation()->::channeldpb::FVector::MergeFrom(from._internal_relativelocation());
  }
  if (from._internal_has_relativerotation()) {
    _internal_mutable_relativerotation()->::channeldpb::FVector::MergeFrom(from._internal_relativerotation());
  }
  if (from._internal_has_relativescale()) {
    _internal_mutable_relativescale()->::channeldpb::FVector::MergeFrom(from._internal_relativescale());
  }
  if (from._internal_removed() != 0) {
    _internal_set_removed(from._internal_removed());
  }
  if (from._internal_isvisible() != 0) {
    _internal_set_isvisible(from._internal_isvisible());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SceneComponentState::CopyFrom(const SceneComponentState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:channeldpb.SceneComponentState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SceneComponentState::IsInitialized() const {
  return true;
}

void SceneComponentState::InternalSwap(SceneComponentState* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &attachsocketname_, lhs_arena,
      &other->attachsocketname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SceneComponentState, isvisible_)
      + sizeof(SceneComponentState::isvisible_)
      - PROTOBUF_FIELD_OFFSET(SceneComponentState, relativelocation_)>(
          reinterpret_cast<char*>(&relativelocation_),
          reinterpret_cast<char*>(&other->relativelocation_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SceneComponentState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_unreal_5fcommon_2eproto_getter, &descriptor_table_unreal_5fcommon_2eproto_once,
      file_level_metadata_unreal_5fcommon_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace channeldpb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::channeldpb::FVector*
Arena::CreateMaybeMessage< ::channeldpb::FVector >(Arena* arena) {
  return Arena::CreateMessageInternal< ::channeldpb::FVector >(arena);
}
template<> PROTOBUF_NOINLINE ::channeldpb::SceneComponentState*
Arena::CreateMaybeMessage< ::channeldpb::SceneComponentState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::channeldpb::SceneComponentState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
