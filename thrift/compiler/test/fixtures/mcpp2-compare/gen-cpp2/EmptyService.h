/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>

#include "includes_types.h"

#include <folly/small_vector.h>

#include "src/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {

class EmptyServiceSvAsyncIf {
 public:
  virtual ~EmptyServiceSvAsyncIf() {}
};

class EmptyServiceAsyncProcessor;

class EmptyServiceSvIf : public EmptyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef EmptyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
};

class EmptyServiceSvNull : public EmptyServiceSvIf {
 public:
};

class EmptyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
 protected:
  EmptyServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<EmptyServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const EmptyServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const EmptyServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<EmptyServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const EmptyServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const EmptyServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
 public:
  EmptyServiceAsyncProcessor(EmptyServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~EmptyServiceAsyncProcessor() {}
};

class EmptyServiceAsyncClient : public apache::thrift::TClientBase {
 public:
  virtual const char* getServiceName();
  typedef std::unique_ptr<apache::thrift::RequestChannel, folly::DelayedDestruction::Destructor> channel_ptr;

  virtual ~EmptyServiceAsyncClient() {}

  EmptyServiceAsyncClient(std::shared_ptr<apache::thrift::RequestChannel> channel) :
      channel_(channel) {
    connectionContext_.reset(new apache::thrift::Cpp2ConnContext);
  }

  apache::thrift::RequestChannel*  getChannel() {
    return this->channel_.get();
  }

  apache::thrift::HeaderChannel*  getHeaderChannel() {
    return dynamic_cast<apache::thrift::HeaderChannel*>(this->channel_.get());
  }
 protected:
  std::unique_ptr<apache::thrift::Cpp2ConnContext> connectionContext_;
  std::shared_ptr<apache::thrift::RequestChannel> channel_;
};

}}} // some::valid::ns
namespace apache { namespace thrift {

}} // apache::thrift
