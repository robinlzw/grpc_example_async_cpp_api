// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: greeting.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_greeting_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_greeting_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_greeting_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_greeting_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_greeting_2eproto;
namespace grpc {
namespace example {
class ReplyGreeting;
class ReplyGreetingDefaultTypeInternal;
extern ReplyGreetingDefaultTypeInternal _ReplyGreeting_default_instance_;
class RequestSubscribe;
class RequestSubscribeDefaultTypeInternal;
extern RequestSubscribeDefaultTypeInternal _RequestSubscribe_default_instance_;
}  // namespace example
}  // namespace grpc
PROTOBUF_NAMESPACE_OPEN
template<> ::grpc::example::ReplyGreeting* Arena::CreateMaybeMessage<::grpc::example::ReplyGreeting>(Arena*);
template<> ::grpc::example::RequestSubscribe* Arena::CreateMaybeMessage<::grpc::example::RequestSubscribe>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpc {
namespace example {

// ===================================================================

class RequestSubscribe :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpc.example.RequestSubscribe) */ {
 public:
  RequestSubscribe();
  virtual ~RequestSubscribe();

  RequestSubscribe(const RequestSubscribe& from);
  RequestSubscribe(RequestSubscribe&& from) noexcept
    : RequestSubscribe() {
    *this = ::std::move(from);
  }

  inline RequestSubscribe& operator=(const RequestSubscribe& from) {
    CopyFrom(from);
    return *this;
  }
  inline RequestSubscribe& operator=(RequestSubscribe&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const RequestSubscribe& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RequestSubscribe* internal_default_instance() {
    return reinterpret_cast<const RequestSubscribe*>(
               &_RequestSubscribe_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RequestSubscribe& a, RequestSubscribe& b) {
    a.Swap(&b);
  }
  inline void Swap(RequestSubscribe* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RequestSubscribe* New() const final {
    return CreateMaybeMessage<RequestSubscribe>(nullptr);
  }

  RequestSubscribe* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RequestSubscribe>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RequestSubscribe& from);
  void MergeFrom(const RequestSubscribe& from);
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
  void InternalSwap(RequestSubscribe* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpc.example.RequestSubscribe";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_greeting_2eproto);
    return ::descriptor_table_greeting_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kCurrentNanosecondFieldNumber = 2,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // uint64 current_nanosecond = 2;
  void clear_current_nanosecond();
  ::PROTOBUF_NAMESPACE_ID::uint64 current_nanosecond() const;
  void set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_current_nanosecond() const;
  void _internal_set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:grpc.example.RequestSubscribe)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::uint64 current_nanosecond_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_greeting_2eproto;
};
// -------------------------------------------------------------------

class ReplyGreeting :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpc.example.ReplyGreeting) */ {
 public:
  ReplyGreeting();
  virtual ~ReplyGreeting();

  ReplyGreeting(const ReplyGreeting& from);
  ReplyGreeting(ReplyGreeting&& from) noexcept
    : ReplyGreeting() {
    *this = ::std::move(from);
  }

  inline ReplyGreeting& operator=(const ReplyGreeting& from) {
    CopyFrom(from);
    return *this;
  }
  inline ReplyGreeting& operator=(ReplyGreeting&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const ReplyGreeting& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ReplyGreeting* internal_default_instance() {
    return reinterpret_cast<const ReplyGreeting*>(
               &_ReplyGreeting_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ReplyGreeting& a, ReplyGreeting& b) {
    a.Swap(&b);
  }
  inline void Swap(ReplyGreeting* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ReplyGreeting* New() const final {
    return CreateMaybeMessage<ReplyGreeting>(nullptr);
  }

  ReplyGreeting* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ReplyGreeting>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ReplyGreeting& from);
  void MergeFrom(const ReplyGreeting& from);
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
  void InternalSwap(ReplyGreeting* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpc.example.ReplyGreeting";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_greeting_2eproto);
    return ::descriptor_table_greeting_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
    kCurrentNanosecondFieldNumber = 2,
  };
  // string message = 1;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // uint64 current_nanosecond = 2;
  void clear_current_nanosecond();
  ::PROTOBUF_NAMESPACE_ID::uint64 current_nanosecond() const;
  void set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_current_nanosecond() const;
  void _internal_set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:grpc.example.ReplyGreeting)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::uint64 current_nanosecond_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_greeting_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RequestSubscribe

// string name = 1;
inline void RequestSubscribe::clear_name() {
  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& RequestSubscribe::name() const {
  // @@protoc_insertion_point(field_get:grpc.example.RequestSubscribe.name)
  return _internal_name();
}
inline void RequestSubscribe::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:grpc.example.RequestSubscribe.name)
}
inline std::string* RequestSubscribe::mutable_name() {
  // @@protoc_insertion_point(field_mutable:grpc.example.RequestSubscribe.name)
  return _internal_mutable_name();
}
inline const std::string& RequestSubscribe::_internal_name() const {
  return name_.GetNoArena();
}
inline void RequestSubscribe::_internal_set_name(const std::string& value) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void RequestSubscribe::set_name(std::string&& value) {
  
  name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grpc.example.RequestSubscribe.name)
}
inline void RequestSubscribe::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grpc.example.RequestSubscribe.name)
}
inline void RequestSubscribe::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grpc.example.RequestSubscribe.name)
}
inline std::string* RequestSubscribe::_internal_mutable_name() {
  
  return name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* RequestSubscribe::release_name() {
  // @@protoc_insertion_point(field_release:grpc.example.RequestSubscribe.name)
  
  return name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void RequestSubscribe::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:grpc.example.RequestSubscribe.name)
}

// uint64 current_nanosecond = 2;
inline void RequestSubscribe::clear_current_nanosecond() {
  current_nanosecond_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 RequestSubscribe::_internal_current_nanosecond() const {
  return current_nanosecond_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 RequestSubscribe::current_nanosecond() const {
  // @@protoc_insertion_point(field_get:grpc.example.RequestSubscribe.current_nanosecond)
  return _internal_current_nanosecond();
}
inline void RequestSubscribe::_internal_set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  current_nanosecond_ = value;
}
inline void RequestSubscribe::set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_current_nanosecond(value);
  // @@protoc_insertion_point(field_set:grpc.example.RequestSubscribe.current_nanosecond)
}

// -------------------------------------------------------------------

// ReplyGreeting

// string message = 1;
inline void ReplyGreeting::clear_message() {
  message_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ReplyGreeting::message() const {
  // @@protoc_insertion_point(field_get:grpc.example.ReplyGreeting.message)
  return _internal_message();
}
inline void ReplyGreeting::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:grpc.example.ReplyGreeting.message)
}
inline std::string* ReplyGreeting::mutable_message() {
  // @@protoc_insertion_point(field_mutable:grpc.example.ReplyGreeting.message)
  return _internal_mutable_message();
}
inline const std::string& ReplyGreeting::_internal_message() const {
  return message_.GetNoArena();
}
inline void ReplyGreeting::_internal_set_message(const std::string& value) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ReplyGreeting::set_message(std::string&& value) {
  
  message_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:grpc.example.ReplyGreeting.message)
}
inline void ReplyGreeting::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:grpc.example.ReplyGreeting.message)
}
inline void ReplyGreeting::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:grpc.example.ReplyGreeting.message)
}
inline std::string* ReplyGreeting::_internal_mutable_message() {
  
  return message_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ReplyGreeting::release_message() {
  // @@protoc_insertion_point(field_release:grpc.example.ReplyGreeting.message)
  
  return message_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ReplyGreeting::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:grpc.example.ReplyGreeting.message)
}

// uint64 current_nanosecond = 2;
inline void ReplyGreeting::clear_current_nanosecond() {
  current_nanosecond_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ReplyGreeting::_internal_current_nanosecond() const {
  return current_nanosecond_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ReplyGreeting::current_nanosecond() const {
  // @@protoc_insertion_point(field_get:grpc.example.ReplyGreeting.current_nanosecond)
  return _internal_current_nanosecond();
}
inline void ReplyGreeting::_internal_set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  current_nanosecond_ = value;
}
inline void ReplyGreeting::set_current_nanosecond(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_current_nanosecond(value);
  // @@protoc_insertion_point(field_set:grpc.example.ReplyGreeting.current_nanosecond)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace example
}  // namespace grpc

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_greeting_2eproto
