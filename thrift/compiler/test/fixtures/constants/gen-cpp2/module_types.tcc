/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "src/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t Internship::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;

  bool isset_weeks = false;

  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "weeks") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "title") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_STRING;
      }
      else if (_fname == "employer") {
        fid = 3;
        _ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->weeks);
          isset_weeks = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->title);
          this->__isset.title = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Company>::read(*iprot, this->employer);
          this->__isset.employer = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  if (!isset_weeks) {
    TProtocolException::throwMissingRequiredField("weeks", "Internship");
  }
  return xfer;
}

template <class Protocol_>
uint32_t Internship::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Internship");
  xfer += prot_->serializedFieldSize("weeks", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->weeks);
  xfer += prot_->serializedFieldSize("title", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->title);
  if (this->__isset.employer) {
    xfer += prot_->serializedFieldSize("employer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Company>::serializedSize<false>(*prot_, this->employer);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Internship::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Internship");
  xfer += prot_->serializedFieldSize("weeks", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->weeks);
  xfer += prot_->serializedFieldSize("title", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->title);
  if (this->__isset.employer) {
    xfer += prot_->serializedFieldSize("employer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Company>::serializedSize<false>(*prot_, this->employer);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Internship::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Internship");
  xfer += prot_->writeFieldBegin("weeks", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->weeks);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("title", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->title);
  xfer += prot_->writeFieldEnd();
  if (this->__isset.employer) {
    xfer += prot_->writeFieldBegin("employer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::Company>::write(*prot_, this->employer);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t UnEnumStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "city") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::City>::read(*iprot, this->city);
          this->__isset.city = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t UnEnumStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("UnEnumStruct");
  xfer += prot_->serializedFieldSize("city", apache::thrift::protocol::T_I32, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::City>::serializedSize<false>(*prot_, this->city);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t UnEnumStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("UnEnumStruct");
  xfer += prot_->serializedFieldSize("city", apache::thrift::protocol::T_I32, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::City>::serializedSize<false>(*prot_, this->city);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t UnEnumStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("UnEnumStruct");
  xfer += prot_->writeFieldBegin("city", apache::thrift::protocol::T_I32, 1);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::enumeration,  ::cpp2::City>::write(*prot_, this->city);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t Range::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;

  bool isset_min = false;
  bool isset_max = false;

  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "min") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "max") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->min);
          isset_min = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->max);
          isset_max = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  if (!isset_min) {
    TProtocolException::throwMissingRequiredField("min", "Range");
  }
  if (!isset_max) {
    TProtocolException::throwMissingRequiredField("max", "Range");
  }
  return xfer;
}

template <class Protocol_>
uint32_t Range::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Range");
  xfer += prot_->serializedFieldSize("min", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->min);
  xfer += prot_->serializedFieldSize("max", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->max);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Range::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("Range");
  xfer += prot_->serializedFieldSize("min", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->min);
  xfer += prot_->serializedFieldSize("max", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->max);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t Range::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("Range");
  xfer += prot_->writeFieldBegin("min", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->min);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("max", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->max);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t struct1::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "a") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "b") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->a);
          this->__isset.a = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->b);
          this->__isset.b = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t struct1::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("struct1");
  xfer += prot_->serializedFieldSize("a", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->a);
  xfer += prot_->serializedFieldSize("b", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->b);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t struct1::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("struct1");
  xfer += prot_->serializedFieldSize("a", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->a);
  xfer += prot_->serializedFieldSize("b", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->b);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t struct1::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("struct1");
  xfer += prot_->writeFieldBegin("a", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->a);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("b", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->b);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t struct2::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "a") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "b") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_STRING;
      }
      else if (_fname == "c") {
        fid = 3;
        _ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (_fname == "d") {
        fid = 4;
        _ftype = apache::thrift::protocol::T_LIST;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->a);
          this->__isset.a = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->b);
          this->__isset.b = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::read(iprot, &this->c);
          this->__isset.c = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_LIST) {
          this->d = std::vector<int32_t>();
          xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int32_t>>::read(*iprot, this->d);
          this->__isset.d = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t struct2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("struct2");
  xfer += prot_->serializedFieldSize("a", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->a);
  xfer += prot_->serializedFieldSize("b", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->b);
  xfer += prot_->serializedFieldSize("c", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::serializedSize(prot_, &this->c);
  xfer += prot_->serializedFieldSize("d", apache::thrift::protocol::T_LIST, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int32_t>>::serializedSize<false>(*prot_, this->d);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t struct2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("struct2");
  xfer += prot_->serializedFieldSize("a", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->serializedSizeI32(this->a);
  xfer += prot_->serializedFieldSize("b", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->serializedSizeString(this->b);
  xfer += prot_->serializedFieldSize("c", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::serializedSizeZC(prot_, &this->c);
  xfer += prot_->serializedFieldSize("d", apache::thrift::protocol::T_LIST, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int32_t>>::serializedSize<false>(*prot_, this->d);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t struct2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("struct2");
  xfer += prot_->writeFieldBegin("a", apache::thrift::protocol::T_I32, 1);
  xfer += prot_->writeI32(this->a);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("b", apache::thrift::protocol::T_STRING, 2);
  xfer += prot_->writeString(this->b);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("c", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::write(prot_, &this->c);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("d", apache::thrift::protocol::T_LIST, 4);
  xfer += ::apache::thrift::detail::pm::protocol_methods< ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, std::vector<int32_t>>::write(*prot_, this->d);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t struct3::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "a") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_STRING;
      }
      else if (_fname == "b") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "c") {
        fid = 3;
        _ftype = apache::thrift::protocol::T_STRUCT;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->a);
          this->__isset.a = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->b);
          this->__isset.b = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct2>::read(iprot, &this->c);
          this->__isset.c = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t struct3::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("struct3");
  xfer += prot_->serializedFieldSize("a", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->a);
  xfer += prot_->serializedFieldSize("b", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->b);
  xfer += prot_->serializedFieldSize("c", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct2>::serializedSize(prot_, &this->c);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t struct3::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("struct3");
  xfer += prot_->serializedFieldSize("a", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->a);
  xfer += prot_->serializedFieldSize("b", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->b);
  xfer += prot_->serializedFieldSize("c", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct2>::serializedSizeZC(prot_, &this->c);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t struct3::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("struct3");
  xfer += prot_->writeFieldBegin("a", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->a);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("b", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->b);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("c", apache::thrift::protocol::T_STRUCT, 3);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct2>::write(prot_, &this->c);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t union1::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  xfer += iprot->readFieldBegin(_fname, _ftype, fid);
  if (_ftype == apache::thrift::protocol::T_STOP) {
    this->__clear();
  } else {
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "i") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "d") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_DOUBLE;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          this->set_i();
          xfer += iprot->readI32(this->mutable_i());
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_DOUBLE) {
          this->set_d();
          xfer += iprot->readDouble(this->mutable_d());
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (UNLIKELY(_ftype != apache::thrift::protocol::T_STOP)) {
      using apache::thrift::protocol::TProtocolException;
      TProtocolException::throwUnionMissingStop();
    }
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t union1::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("union1");
  switch(this->getType()) {
    case union1::Type::i:
    {
      xfer += prot_->serializedFieldSize("i", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->serializedSizeI32(this->get_i());
      break;
    }
    case union1::Type::d:
    {
      xfer += prot_->serializedFieldSize("d", apache::thrift::protocol::T_DOUBLE, 2);
      xfer += prot_->serializedSizeDouble(this->get_d());
      break;
    }
    case union1::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t union1::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("union1");
  switch(this->getType()) {
    case union1::Type::i:
    {
      xfer += prot_->serializedFieldSize("i", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->serializedSizeI32(this->get_i());
      break;
    }
    case union1::Type::d:
    {
      xfer += prot_->serializedFieldSize("d", apache::thrift::protocol::T_DOUBLE, 2);
      xfer += prot_->serializedSizeDouble(this->get_d());
      break;
    }
    case union1::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t union1::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("union1");
  switch(this->getType()) {
    case union1::Type::i:
    {
      xfer += prot_->writeFieldBegin("i", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->writeI32(this->get_i());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case union1::Type::d:
    {
      xfer += prot_->writeFieldBegin("d", apache::thrift::protocol::T_DOUBLE, 2);
      xfer += prot_->writeDouble(this->get_d());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case union1::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t union2::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::TProtocolException;


  xfer += iprot->readFieldBegin(_fname, _ftype, fid);
  if (_ftype == apache::thrift::protocol::T_STOP) {
    this->__clear();
  } else {
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (_fname == "i") {
        fid = 1;
        _ftype = apache::thrift::protocol::T_I32;
      }
      else if (_fname == "d") {
        fid = 2;
        _ftype = apache::thrift::protocol::T_DOUBLE;
      }
      else if (_fname == "s") {
        fid = 3;
        _ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (_fname == "u") {
        fid = 4;
        _ftype = apache::thrift::protocol::T_STRUCT;
      }
    }
    switch (fid) {
      case 1:
      {
        if (_ftype == apache::thrift::protocol::T_I32) {
          this->set_i();
          xfer += iprot->readI32(this->mutable_i());
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 2:
      {
        if (_ftype == apache::thrift::protocol::T_DOUBLE) {
          this->set_d();
          xfer += iprot->readDouble(this->mutable_d());
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 3:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          this->set_s();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::read(iprot, &this->mutable_s());
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      case 4:
      {
        if (_ftype == apache::thrift::protocol::T_STRUCT) {
          this->set_u();
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::union1>::read(iprot, &this->mutable_u());
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(_ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (UNLIKELY(_ftype != apache::thrift::protocol::T_STOP)) {
      using apache::thrift::protocol::TProtocolException;
      TProtocolException::throwUnionMissingStop();
    }
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t union2::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("union2");
  switch(this->getType()) {
    case union2::Type::i:
    {
      xfer += prot_->serializedFieldSize("i", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->serializedSizeI32(this->get_i());
      break;
    }
    case union2::Type::d:
    {
      xfer += prot_->serializedFieldSize("d", apache::thrift::protocol::T_DOUBLE, 2);
      xfer += prot_->serializedSizeDouble(this->get_d());
      break;
    }
    case union2::Type::s:
    {
      xfer += prot_->serializedFieldSize("s", apache::thrift::protocol::T_STRUCT, 3);
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::serializedSize(prot_, &this->get_s());
      break;
    }
    case union2::Type::u:
    {
      xfer += prot_->serializedFieldSize("u", apache::thrift::protocol::T_STRUCT, 4);
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::union1>::serializedSize(prot_, &this->get_u());
      break;
    }
    case union2::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t union2::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("union2");
  switch(this->getType()) {
    case union2::Type::i:
    {
      xfer += prot_->serializedFieldSize("i", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->serializedSizeI32(this->get_i());
      break;
    }
    case union2::Type::d:
    {
      xfer += prot_->serializedFieldSize("d", apache::thrift::protocol::T_DOUBLE, 2);
      xfer += prot_->serializedSizeDouble(this->get_d());
      break;
    }
    case union2::Type::s:
    {
      xfer += prot_->serializedFieldSize("s", apache::thrift::protocol::T_STRUCT, 3);
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::serializedSizeZC(prot_, &this->get_s());
      break;
    }
    case union2::Type::u:
    {
      xfer += prot_->serializedFieldSize("u", apache::thrift::protocol::T_STRUCT, 4);
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::union1>::serializedSizeZC(prot_, &this->get_u());
      break;
    }
    case union2::Type::__EMPTY__:;
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t union2::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("union2");
  switch(this->getType()) {
    case union2::Type::i:
    {
      xfer += prot_->writeFieldBegin("i", apache::thrift::protocol::T_I32, 1);
      xfer += prot_->writeI32(this->get_i());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case union2::Type::d:
    {
      xfer += prot_->writeFieldBegin("d", apache::thrift::protocol::T_DOUBLE, 2);
      xfer += prot_->writeDouble(this->get_d());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case union2::Type::s:
    {
      xfer += prot_->writeFieldBegin("s", apache::thrift::protocol::T_STRUCT, 3);
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::struct1>::write(prot_, &this->get_s());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case union2::Type::u:
    {
      xfer += prot_->writeFieldBegin("u", apache::thrift::protocol::T_STRUCT, 4);
      xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::union1>::write(prot_, &this->get_u());
      xfer += prot_->writeFieldEnd();
      break;
    }
    case union2::Type::__EMPTY__:;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
