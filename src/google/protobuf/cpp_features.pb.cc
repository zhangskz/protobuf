// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: google/protobuf/cpp_features.proto
// Protobuf C++ Version: 5.28.3-dev

#include "google/protobuf/cpp_features.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace pb {

inline constexpr CppFeatures::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        legacy_closed_enum_{false},
        string_type_{static_cast< ::pb::CppFeatures_StringType >(0)} {}

template <typename>
PROTOBUF_CONSTEXPR CppFeatures::CppFeatures(::_pbi::ConstantInitialized)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(_class_data_.base()),
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(),
#endif  // PROTOBUF_CUSTOM_VTABLE
      _impl_(::_pbi::ConstantInitialized()) {
}
struct CppFeaturesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CppFeaturesDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CppFeaturesDefaultTypeInternal() {}
  union {
    CppFeatures _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CppFeaturesDefaultTypeInternal _CppFeatures_default_instance_;
}  // namespace pb
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2fcpp_5ffeatures_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_google_2fprotobuf_2fcpp_5ffeatures_2eproto = nullptr;
const ::uint32_t
    TableStruct_google_2fprotobuf_2fcpp_5ffeatures_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        PROTOBUF_FIELD_OFFSET(::pb::CppFeatures, _impl_._has_bits_),
        PROTOBUF_FIELD_OFFSET(::pb::CppFeatures, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::pb::CppFeatures, _impl_.legacy_closed_enum_),
        PROTOBUF_FIELD_OFFSET(::pb::CppFeatures, _impl_.string_type_),
        0,
        1,
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, 10, -1, sizeof(::pb::CppFeatures)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::pb::_CppFeatures_default_instance_._instance,
};
const char descriptor_table_protodef_google_2fprotobuf_2fcpp_5ffeatures_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\"google/protobuf/cpp_features.proto\022\002pb"
    "\032 google/protobuf/descriptor.proto\"\256\003\n\013C"
    "ppFeatures\022\373\001\n\022legacy_closed_enum\030\001 \001(\010B"
    "\336\001\210\001\001\230\001\004\230\001\001\242\001\t\022\004true\030\204\007\242\001\n\022\005false\030\347\007\262\001\270\001"
    "\010\350\007\020\350\007\032\257\001The legacy closed enum treatmen"
    "t in C++ is deprecated and is scheduled "
    "to be removed in edition 2025.  Mark enu"
    "m type on the enum definitions themselve"
    "s rather than on fields.\022Z\n\013string_type\030"
    "\002 \001(\0162\032.pb.CppFeatures.StringTypeB)\210\001\001\230\001"
    "\004\230\001\001\242\001\013\022\006STRING\030\204\007\242\001\t\022\004VIEW\030\351\007\262\001\003\010\350\007\"E\n\n"
    "StringType\022\027\n\023STRING_TYPE_UNKNOWN\020\000\022\010\n\004V"
    "IEW\020\001\022\010\n\004CORD\020\002\022\n\n\006STRING\020\003::\n\003cpp\022\033.goo"
    "gle.protobuf.FeatureSet\030\350\007 \001(\0132\017.pb.CppF"
    "eatures"
};
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto_deps[1] =
    {
        &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::absl::once_flag descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto = {
    false,
    false,
    567,
    descriptor_table_protodef_google_2fprotobuf_2fcpp_5ffeatures_2eproto,
    "google/protobuf/cpp_features.proto",
    &descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto_once,
    descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_google_2fprotobuf_2fcpp_5ffeatures_2eproto::offsets,
    file_level_enum_descriptors_google_2fprotobuf_2fcpp_5ffeatures_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fcpp_5ffeatures_2eproto,
};
namespace pb {
const ::google::protobuf::EnumDescriptor* CppFeatures_StringType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2fcpp_5ffeatures_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t CppFeatures_StringType_internal_data_[] = {
    262144u, 0u, };
bool CppFeatures_StringType_IsValid(int value) {
  return 0 <= value && value <= 3;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr CppFeatures_StringType CppFeatures::STRING_TYPE_UNKNOWN;
constexpr CppFeatures_StringType CppFeatures::VIEW;
constexpr CppFeatures_StringType CppFeatures::CORD;
constexpr CppFeatures_StringType CppFeatures::STRING;
constexpr CppFeatures_StringType CppFeatures::StringType_MIN;
constexpr CppFeatures_StringType CppFeatures::StringType_MAX;
constexpr int CppFeatures::StringType_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class CppFeatures::_Internal {
 public:
  using HasBits =
      decltype(std::declval<CppFeatures>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
      8 * PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_._has_bits_);
};

CppFeatures::CppFeatures(::google::protobuf::Arena* arena)
#if defined(PROTOBUF_CUSTOM_VTABLE)
    : ::google::protobuf::Message(arena, _class_data_.base()) {
#else   // PROTOBUF_CUSTOM_VTABLE
    : ::google::protobuf::Message(arena) {
#endif  // PROTOBUF_CUSTOM_VTABLE
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:pb.CppFeatures)
}
CppFeatures::CppFeatures(
    ::google::protobuf::Arena* arena, const CppFeatures& from)
    : CppFeatures(arena) {
  MergeFrom(from);
}
inline PROTOBUF_NDEBUG_INLINE CppFeatures::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0} {}

inline void CppFeatures::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, legacy_closed_enum_),
           0,
           offsetof(Impl_, string_type_) -
               offsetof(Impl_, legacy_closed_enum_) +
               sizeof(Impl_::string_type_));
}
CppFeatures::~CppFeatures() {
  // @@protoc_insertion_point(destructor:pb.CppFeatures)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CppFeatures::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.~Impl_();
}

PROTOBUF_CONSTINIT
PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::google::protobuf::MessageLite::ClassDataFull
    CppFeatures::_class_data_ = {
        ::google::protobuf::Message::ClassData{
            &_CppFeatures_default_instance_._instance,
            &_table_.header,
            nullptr,  // OnDemandRegisterArenaDtor
            nullptr,  // IsInitialized
            &CppFeatures::MergeImpl,
#if defined(PROTOBUF_CUSTOM_VTABLE)
            ::google::protobuf::Message::GetDeleteImpl<CppFeatures>(),
            ::google::protobuf::Message::GetNewImpl<CppFeatures>(),
            ::google::protobuf::Message::GetClearImpl<CppFeatures>(), &CppFeatures::ByteSizeLong,
                &CppFeatures::_InternalSerialize,
#endif  // PROTOBUF_CUSTOM_VTABLE
            PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_._cached_size_),
            false,
        },
        &CppFeatures::kDescriptorMethods,
        &descriptor_table_google_2fprotobuf_2fcpp_5ffeatures_2eproto,
        nullptr,  // tracker
};
const ::google::protobuf::MessageLite::ClassData* CppFeatures::GetClassData() const {
  ::google::protobuf::internal::PrefetchToLocalCache(&_class_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_class_data_.tc_table);
  return _class_data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<1, 2, 1, 0, 2> CppFeatures::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_._has_bits_),
    0, // no _extensions_
    2, 8,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    _class_data_.base(),
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::pb::CppFeatures>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    // optional .pb.CppFeatures.StringType string_type = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {::_pbi::TcParser::FastEr0S1,
     {16, 1, 3, PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_.string_type_)}},
    // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {::_pbi::TcParser::SingularVarintNoZag1<bool, offsetof(CppFeatures, _impl_.legacy_closed_enum_), 0>(),
     {8, 0, 0, PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_.legacy_closed_enum_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_.legacy_closed_enum_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBool)},
    // optional .pb.CppFeatures.StringType string_type = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
    {PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_.string_type_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kEnumRange)},
  }}, {{
    {0, 4},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void CppFeatures::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.CppFeatures)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&_impl_.legacy_closed_enum_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.string_type_) -
        reinterpret_cast<char*>(&_impl_.legacy_closed_enum_)) + sizeof(_impl_.string_type_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::uint8_t* CppFeatures::_InternalSerialize(
            const MessageLite& base, ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) {
          const CppFeatures& this_ = static_cast<const CppFeatures&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::uint8_t* CppFeatures::_InternalSerialize(
            ::uint8_t* target,
            ::google::protobuf::io::EpsCopyOutputStream* stream) const {
          const CppFeatures& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(serialize_to_array_start:pb.CppFeatures)
          ::uint32_t cached_has_bits = 0;
          (void)cached_has_bits;

          cached_has_bits = this_._impl_._has_bits_[0];
          // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
          if (cached_has_bits & 0x00000001u) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteBoolToArray(
                1, this_._internal_legacy_closed_enum(), target);
          }

          // optional .pb.CppFeatures.StringType string_type = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
          if (cached_has_bits & 0x00000002u) {
            target = stream->EnsureSpace(target);
            target = ::_pbi::WireFormatLite::WriteEnumToArray(
                2, this_._internal_string_type(), target);
          }

          if (PROTOBUF_PREDICT_FALSE(this_._internal_metadata_.have_unknown_fields())) {
            target =
                ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
                    this_._internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
          }
          // @@protoc_insertion_point(serialize_to_array_end:pb.CppFeatures)
          return target;
        }

#if defined(PROTOBUF_CUSTOM_VTABLE)
        ::size_t CppFeatures::ByteSizeLong(const MessageLite& base) {
          const CppFeatures& this_ = static_cast<const CppFeatures&>(base);
#else   // PROTOBUF_CUSTOM_VTABLE
        ::size_t CppFeatures::ByteSizeLong() const {
          const CppFeatures& this_ = *this;
#endif  // PROTOBUF_CUSTOM_VTABLE
          // @@protoc_insertion_point(message_byte_size_start:pb.CppFeatures)
          ::size_t total_size = 0;

          ::uint32_t cached_has_bits = 0;
          // Prevent compiler warnings about cached_has_bits being unused
          (void)cached_has_bits;

          ::_pbi::Prefetch5LinesFrom7Lines(&this_);
          cached_has_bits = this_._impl_._has_bits_[0];
          if (cached_has_bits & 0x00000003u) {
            // optional bool legacy_closed_enum = 1 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
            if (cached_has_bits & 0x00000001u) {
              total_size += 2;
            }
            // optional .pb.CppFeatures.StringType string_type = 2 [retention = RETENTION_RUNTIME, targets = TARGET_TYPE_FIELD, targets = TARGET_TYPE_FILE, edition_defaults = {
            if (cached_has_bits & 0x00000002u) {
              total_size += 1 +
                            ::_pbi::WireFormatLite::EnumSize(this_._internal_string_type());
            }
          }
          return this_.MaybeComputeUnknownFieldsSize(total_size,
                                                     &this_._impl_._cached_size_);
        }

void CppFeatures::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<CppFeatures*>(&to_msg);
  auto& from = static_cast<const CppFeatures&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pb.CppFeatures)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_impl_.legacy_closed_enum_ = from._impl_.legacy_closed_enum_;
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.string_type_ = from._impl_.string_type_;
    }
  }
  _this->_impl_._has_bits_[0] |= cached_has_bits;
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CppFeatures::CopyFrom(const CppFeatures& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.CppFeatures)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void CppFeatures::InternalSwap(CppFeatures* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_.string_type_)
      + sizeof(CppFeatures::_impl_.string_type_)
      - PROTOBUF_FIELD_OFFSET(CppFeatures, _impl_.legacy_closed_enum_)>(
          reinterpret_cast<char*>(&_impl_.legacy_closed_enum_),
          reinterpret_cast<char*>(&other->_impl_.legacy_closed_enum_));
}

::google::protobuf::Metadata CppFeatures::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
PROTOBUF_CONSTINIT PROTOBUF_EXPORT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::_pbi::
        ExtensionIdentifier<::google::protobuf::FeatureSet, ::_pbi::MessageTypeTraits< ::pb::CppFeatures >,
                            11, false>
            cpp(kCppFieldNumber, &::pb::_CppFeatures_default_instance_);
// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
