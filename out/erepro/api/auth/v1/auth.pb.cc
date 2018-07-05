// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: erepro/api/auth/v1/auth.proto

#include "erepro/api/auth/v1/auth.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace erego {
namespace api {
namespace auth {
namespace v1 {
class AuthRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AuthRequest>
      _instance;
} _AuthRequest_default_instance_;
class AuthResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AuthResponse>
      _instance;
} _AuthResponse_default_instance_;
}  // namespace v1
}  // namespace auth
}  // namespace api
}  // namespace erego
namespace protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto {
static void InitDefaultsAuthRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::erego::api::auth::v1::_AuthRequest_default_instance_;
    new (ptr) ::erego::api::auth::v1::AuthRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::erego::api::auth::v1::AuthRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AuthRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAuthRequest}, {}};

static void InitDefaultsAuthResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::erego::api::auth::v1::_AuthResponse_default_instance_;
    new (ptr) ::erego::api::auth::v1::AuthResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::erego::api::auth::v1::AuthResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AuthResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAuthResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_AuthRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AuthResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::erego::api::auth::v1::AuthRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::erego::api::auth::v1::AuthRequest, username_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::erego::api::auth::v1::AuthRequest, password_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::erego::api::auth::v1::AuthResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::erego::api::auth::v1::AuthResponse, authenticated_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::erego::api::auth::v1::AuthRequest)},
  { 7, -1, sizeof(::erego::api::auth::v1::AuthResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::erego::api::auth::v1::_AuthRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::erego::api::auth::v1::_AuthResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "erepro/api/auth/v1/auth.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\035erepro/api/auth/v1/auth.proto\022\021erego.a"
      "pi.auth.v1\032\034google/api/annotations.proto"
      "\"1\n\013AuthRequest\022\020\n\010username\030\001 \001(\t\022\020\n\010pas"
      "sword\030\002 \001(\t\"%\n\014AuthResponse\022\025\n\rauthentic"
      "ated\030\001 \001(\0102l\n\004Auth\022d\n\014Authenticate\022\036.ere"
      "go.api.auth.v1.AuthRequest\032\037.erego.api.a"
      "uth.v1.AuthResponse\"\023\202\323\344\223\002\r\"\010/v1/auth:\001*"
      "b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 288);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "erepro/api/auth/v1/auth.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fannotations_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto
namespace erego {
namespace api {
namespace auth {
namespace v1 {

// ===================================================================

void AuthRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthRequest::kUsernameFieldNumber;
const int AuthRequest::kPasswordFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthRequest::AuthRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::scc_info_AuthRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:erego.api.auth.v1.AuthRequest)
}
AuthRequest::AuthRequest(const AuthRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.username().size() > 0) {
    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.password().size() > 0) {
    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  // @@protoc_insertion_point(copy_constructor:erego.api.auth.v1.AuthRequest)
}

void AuthRequest::SharedCtor() {
  username_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AuthRequest::~AuthRequest() {
  // @@protoc_insertion_point(destructor:erego.api.auth.v1.AuthRequest)
  SharedDtor();
}

void AuthRequest::SharedDtor() {
  username_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AuthRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AuthRequest::descriptor() {
  ::protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AuthRequest& AuthRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::scc_info_AuthRequest.base);
  return *internal_default_instance();
}


void AuthRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:erego.api.auth.v1.AuthRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool AuthRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:erego.api.auth.v1.AuthRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string username = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_username()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->username().data(), static_cast<int>(this->username().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "erego.api.auth.v1.AuthRequest.username"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string password = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_password()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->password().data(), static_cast<int>(this->password().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "erego.api.auth.v1.AuthRequest.password"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:erego.api.auth.v1.AuthRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:erego.api.auth.v1.AuthRequest)
  return false;
#undef DO_
}

void AuthRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:erego.api.auth.v1.AuthRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string username = 1;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "erego.api.auth.v1.AuthRequest.username");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->username(), output);
  }

  // string password = 2;
  if (this->password().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->password().data(), static_cast<int>(this->password().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "erego.api.auth.v1.AuthRequest.password");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->password(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:erego.api.auth.v1.AuthRequest)
}

::google::protobuf::uint8* AuthRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:erego.api.auth.v1.AuthRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string username = 1;
  if (this->username().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->username().data(), static_cast<int>(this->username().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "erego.api.auth.v1.AuthRequest.username");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->username(), target);
  }

  // string password = 2;
  if (this->password().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->password().data(), static_cast<int>(this->password().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "erego.api.auth.v1.AuthRequest.password");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->password(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:erego.api.auth.v1.AuthRequest)
  return target;
}

size_t AuthRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:erego.api.auth.v1.AuthRequest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string username = 1;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->username());
  }

  // string password = 2;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->password());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:erego.api.auth.v1.AuthRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:erego.api.auth.v1.AuthRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:erego.api.auth.v1.AuthRequest)
    MergeFrom(*source);
  }
}

void AuthRequest::MergeFrom(const AuthRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:erego.api.auth.v1.AuthRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.password().size() > 0) {

    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
}

void AuthRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:erego.api.auth.v1.AuthRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthRequest::CopyFrom(const AuthRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:erego.api.auth.v1.AuthRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthRequest::IsInitialized() const {
  return true;
}

void AuthRequest::Swap(AuthRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthRequest::InternalSwap(AuthRequest* other) {
  using std::swap;
  username_.Swap(&other->username_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  password_.Swap(&other->password_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AuthRequest::GetMetadata() const {
  protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void AuthResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthResponse::kAuthenticatedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthResponse::AuthResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::scc_info_AuthResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:erego.api.auth.v1.AuthResponse)
}
AuthResponse::AuthResponse(const AuthResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  authenticated_ = from.authenticated_;
  // @@protoc_insertion_point(copy_constructor:erego.api.auth.v1.AuthResponse)
}

void AuthResponse::SharedCtor() {
  authenticated_ = false;
}

AuthResponse::~AuthResponse() {
  // @@protoc_insertion_point(destructor:erego.api.auth.v1.AuthResponse)
  SharedDtor();
}

void AuthResponse::SharedDtor() {
}

void AuthResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* AuthResponse::descriptor() {
  ::protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AuthResponse& AuthResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::scc_info_AuthResponse.base);
  return *internal_default_instance();
}


void AuthResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:erego.api.auth.v1.AuthResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  authenticated_ = false;
  _internal_metadata_.Clear();
}

bool AuthResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:erego.api.auth.v1.AuthResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool authenticated = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &authenticated_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:erego.api.auth.v1.AuthResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:erego.api.auth.v1.AuthResponse)
  return false;
#undef DO_
}

void AuthResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:erego.api.auth.v1.AuthResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool authenticated = 1;
  if (this->authenticated() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->authenticated(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:erego.api.auth.v1.AuthResponse)
}

::google::protobuf::uint8* AuthResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:erego.api.auth.v1.AuthResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool authenticated = 1;
  if (this->authenticated() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->authenticated(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:erego.api.auth.v1.AuthResponse)
  return target;
}

size_t AuthResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:erego.api.auth.v1.AuthResponse)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bool authenticated = 1;
  if (this->authenticated() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:erego.api.auth.v1.AuthResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const AuthResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:erego.api.auth.v1.AuthResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:erego.api.auth.v1.AuthResponse)
    MergeFrom(*source);
  }
}

void AuthResponse::MergeFrom(const AuthResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:erego.api.auth.v1.AuthResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.authenticated() != 0) {
    set_authenticated(from.authenticated());
  }
}

void AuthResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:erego.api.auth.v1.AuthResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthResponse::CopyFrom(const AuthResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:erego.api.auth.v1.AuthResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthResponse::IsInitialized() const {
  return true;
}

void AuthResponse::Swap(AuthResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthResponse::InternalSwap(AuthResponse* other) {
  using std::swap;
  swap(authenticated_, other->authenticated_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AuthResponse::GetMetadata() const {
  protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_erepro_2fapi_2fauth_2fv1_2fauth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace auth
}  // namespace api
}  // namespace erego
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::erego::api::auth::v1::AuthRequest* Arena::CreateMaybeMessage< ::erego::api::auth::v1::AuthRequest >(Arena* arena) {
  return Arena::CreateInternal< ::erego::api::auth::v1::AuthRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::erego::api::auth::v1::AuthResponse* Arena::CreateMaybeMessage< ::erego::api::auth::v1::AuthResponse >(Arena* arena) {
  return Arena::CreateInternal< ::erego::api::auth::v1::AuthResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)