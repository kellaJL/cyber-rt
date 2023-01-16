// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/run_mode_conf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2frun_5fmode_5fconf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2frun_5fmode_5fconf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cyber_2fproto_2frun_5fmode_5fconf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cyber_2fproto_2frun_5fmode_5fconf_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class RunModeConf;
class RunModeConfDefaultTypeInternal;
extern RunModeConfDefaultTypeInternal _RunModeConf_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::RunModeConf* Arena::CreateMaybeMessage<::apollo::cyber::proto::RunModeConf>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

enum RunMode : int {
  MODE_REALITY = 0,
  MODE_SIMULATION = 1
};
bool RunMode_IsValid(int value);
constexpr RunMode RunMode_MIN = MODE_REALITY;
constexpr RunMode RunMode_MAX = MODE_SIMULATION;
constexpr int RunMode_ARRAYSIZE = RunMode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RunMode_descriptor();
template<typename T>
inline const std::string& RunMode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RunMode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RunMode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RunMode_descriptor(), enum_t_value);
}
inline bool RunMode_Parse(
    const std::string& name, RunMode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RunMode>(
    RunMode_descriptor(), name, value);
}
// ===================================================================

class RunModeConf PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.RunModeConf) */ {
 public:
  inline RunModeConf() : RunModeConf(nullptr) {};
  virtual ~RunModeConf();

  RunModeConf(const RunModeConf& from);
  RunModeConf(RunModeConf&& from) noexcept
    : RunModeConf() {
    *this = ::std::move(from);
  }

  inline RunModeConf& operator=(const RunModeConf& from) {
    CopyFrom(from);
    return *this;
  }
  inline RunModeConf& operator=(RunModeConf&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RunModeConf& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RunModeConf* internal_default_instance() {
    return reinterpret_cast<const RunModeConf*>(
               &_RunModeConf_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RunModeConf& a, RunModeConf& b) {
    a.Swap(&b);
  }
  inline void Swap(RunModeConf* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RunModeConf* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RunModeConf* New() const final {
    return CreateMaybeMessage<RunModeConf>(nullptr);
  }

  RunModeConf* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RunModeConf>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RunModeConf& from);
  void MergeFrom(const RunModeConf& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RunModeConf* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.RunModeConf";
  }
  protected:
  explicit RunModeConf(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto);
    return ::descriptor_table_cyber_2fproto_2frun_5fmode_5fconf_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRunModeFieldNumber = 1,
  };
  // optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
  bool has_run_mode() const;
  private:
  bool _internal_has_run_mode() const;
  public:
  void clear_run_mode();
  ::apollo::cyber::proto::RunMode run_mode() const;
  void set_run_mode(::apollo::cyber::proto::RunMode value);
  private:
  ::apollo::cyber::proto::RunMode _internal_run_mode() const;
  void _internal_set_run_mode(::apollo::cyber::proto::RunMode value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.RunModeConf)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int run_mode_;
  friend struct ::TableStruct_cyber_2fproto_2frun_5fmode_5fconf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RunModeConf

// optional .apollo.cyber.proto.RunMode run_mode = 1 [default = MODE_REALITY];
inline bool RunModeConf::_internal_has_run_mode() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RunModeConf::has_run_mode() const {
  return _internal_has_run_mode();
}
inline void RunModeConf::clear_run_mode() {
  run_mode_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::apollo::cyber::proto::RunMode RunModeConf::_internal_run_mode() const {
  return static_cast< ::apollo::cyber::proto::RunMode >(run_mode_);
}
inline ::apollo::cyber::proto::RunMode RunModeConf::run_mode() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.RunModeConf.run_mode)
  return _internal_run_mode();
}
inline void RunModeConf::_internal_set_run_mode(::apollo::cyber::proto::RunMode value) {
  assert(::apollo::cyber::proto::RunMode_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  run_mode_ = value;
}
inline void RunModeConf::set_run_mode(::apollo::cyber::proto::RunMode value) {
  _internal_set_run_mode(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.RunModeConf.run_mode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::cyber::proto::RunMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::RunMode>() {
  return ::apollo::cyber::proto::RunMode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2frun_5fmode_5fconf_2eproto
