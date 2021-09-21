/**
 * Autogenerated by Thrift for src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "folly/sorted_vector_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct FieldA;
struct FieldA;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_FieldA
#define APACHE_THRIFT_ACCESSOR_FieldA
APACHE_THRIFT_DEFINE_ACCESSOR(FieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace a { namespace different { namespace ns {

enum class AnEnum {
  FIELDA = 2,
  FIELDB = 4,
};




}}} // a::different::ns

namespace std {
template<> struct hash<::a::different::ns::AnEnum> :
  ::apache::thrift::detail::enum_hash<::a::different::ns::AnEnum> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::a::different::ns::AnEnum>;

template <> struct TEnumTraits<::a::different::ns::AnEnum> {
  using type = ::a::different::ns::AnEnum;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::FIELDA; }
  static constexpr type max() { return type::FIELDB; }
};


}} // apache::thrift

namespace a { namespace different { namespace ns {

using _AnEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<AnEnum>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _AnEnum_EnumMapFactory::ValuesToNamesMapType _AnEnum_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _AnEnum_EnumMapFactory::NamesToValuesMapType _AnEnum_NAMES_TO_VALUES;

}}} // a::different::ns

// END declare_enums
// BEGIN forward_declare
namespace a { namespace different { namespace ns {
class AStruct;
class AStructB;
}}} // a::different::ns
// END forward_declare
// BEGIN typedefs
namespace a { namespace different { namespace ns {
typedef ::std::int64_t IncludedInt64;

}}} // a::different::ns
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace a { namespace different { namespace ns {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

class AStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = AStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  AStruct() :
      FieldA() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStruct(apache::thrift::FragileConstructor, ::std::int32_t FieldA__arg);

  AStruct(AStruct&&) = default;

  AStruct(const AStruct&) = default;


  AStruct& operator=(AStruct&&) = default;

  AStruct& operator=(const AStruct&) = default;
  void __clear();
 private:
  ::std::int32_t FieldA;

 private:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    std::array<uint8_t,1> array_isset;
    template<size_t field_index>
    bool __fbthrift_get(folly::index_constant<field_index>) const {
      static_assert(field_index < 1, "Isset index is out of boundary");
      return array_isset[field_index] == 1;
    }
    template<size_t field_index>
    void __fbthrift_set(folly::index_constant<field_index>, bool isset_flag) {
      static_assert(field_index < 1, "Isset index is out of boundary");
      array_isset[field_index] = isset_flag ? 1 : 0;
    }
  } __isset = {};

 public:

  bool operator==(const AStruct&) const;
  bool operator<(const AStruct&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> FieldA_ref() const& {
    return {this->FieldA, __isset.array_isset.at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> FieldA_ref() const&& {
    return {std::move(this->FieldA), __isset.array_isset.at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> FieldA_ref() & {
    return {this->FieldA, __isset.array_isset.at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> FieldA_ref() && {
    return {std::move(this->FieldA), __isset.array_isset.at(folly::index_constant<0>())};
  }

  ::std::int32_t get_FieldA() const {
    return FieldA;
  }

  [[deprecated("Use `FOO.FieldA_ref() = BAR;` instead of `FOO.set_FieldA(BAR);`")]]
  ::std::int32_t& set_FieldA(::std::int32_t FieldA_) {
    FieldA = FieldA_;
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return FieldA;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<AStruct>;
  friend void swap(AStruct& a, AStruct& b);
};

template <class Protocol_>
uint32_t AStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // a::different::ns
namespace a { namespace different { namespace ns {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

class AStructB final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = AStructB;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  AStructB() :
      FieldA(std::make_shared<::a::different::ns::AStruct>()) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  AStructB(apache::thrift::FragileConstructor, ::std::shared_ptr<const ::a::different::ns::AStruct> FieldA__arg);

  AStructB(AStructB&&) noexcept;

  AStructB(const AStructB& src);


  AStructB& operator=(AStructB&&) noexcept;
  AStructB& operator=(const AStructB& src);
  void __clear();
 public:
  ::std::shared_ptr<const ::a::different::ns::AStruct> FieldA;

 private:

 public:

  bool operator==(const AStructB&) const;
  bool operator<(const AStructB&) const;
  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T& FieldA_ref() & { return FieldA; }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T& FieldA_ref() const& { return FieldA; }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE T&& FieldA_ref() && { return std::move(FieldA); }

  template <typename ..., typename T = ::std::shared_ptr<const ::a::different::ns::AStruct>>
  FOLLY_ERASE const T&& FieldA_ref() const&& { return std::move(FieldA); }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<AStructB>;
  friend void swap(AStructB& a, AStructB& b);
};

template <class Protocol_>
uint32_t AStructB::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // a::different::ns
THRIFT_IGNORE_ISSET_USE_WARNING_END
