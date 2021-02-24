/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.tcc"
#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace apache { namespace thrift { namespace fixtures { namespace types {
std::unique_ptr<apache::thrift::AsyncProcessor> SomeServiceSvIf::getProcessor() {
  return std::make_unique<SomeServiceAsyncProcessor>(this);
}


void SomeServiceSvIf::bounce_map( ::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap> /*m*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("bounce_map");
}

folly::SemiFuture<std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap>> SomeServiceSvIf::semifuture_bounce_map(std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap> p_m) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&]( ::apache::thrift::fixtures::types::SomeMap& _return) { bounce_map(_return, std::move(p_m)); });
}

folly::Future<std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap>> SomeServiceSvIf::future_bounce_map(std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap> p_m) {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_bounce_map(std::move(p_m)), std::move(ka));
}

void SomeServiceSvIf::async_tm_bounce_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap>>> callback, std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap> p_m) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_bounce_map(std::move(p_m));
  });
}

void SomeServiceSvIf::binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& /*_return*/, std::unique_ptr<::std::vector<int64_t>> /*r*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("binary_keyed_map");
}

folly::SemiFuture<std::unique_ptr<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>>> SomeServiceSvIf::semifuture_binary_keyed_map(std::unique_ptr<::std::vector<int64_t>> p_r) {
  return apache::thrift::detail::si::semifuture_returning_uptr([&](::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& _return) { binary_keyed_map(_return, std::move(p_r)); });
}

folly::Future<std::unique_ptr<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>>> SomeServiceSvIf::future_binary_keyed_map(std::unique_ptr<::std::vector<int64_t>> p_r) {
  using Source = apache::thrift::concurrency::ThreadManager::Source;
  auto scope = getRequestContext()->getRequestExecutionScope();
  auto ka = getThreadManager()->getKeepAlive(std::move(scope), Source::INTERNAL);
  return apache::thrift::detail::si::future(semifuture_binary_keyed_map(std::move(p_r)), std::move(ka));
}

void SomeServiceSvIf::async_tm_binary_keyed_map(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>>>> callback, std::unique_ptr<::std::vector<int64_t>> p_r) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] {
    return future_binary_keyed_map(std::move(p_r));
  });
}

void SomeServiceSvNull::bounce_map( ::apache::thrift::fixtures::types::SomeMap& /*_return*/, std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap> /*m*/) {}

void SomeServiceSvNull::binary_keyed_map(::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>& /*_return*/, std::unique_ptr<::std::vector<int64_t>> /*r*/) {}



const char* SomeServiceAsyncProcessor::getServiceName() {
  return "SomeService";
}

void SomeServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<SomeServiceSvIf>::gen(*response.metadata_ref(), *response.context_ref());
}

void SomeServiceAsyncProcessor::processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> SomeServiceAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const SomeServiceAsyncProcessor::ProcessMap& SomeServiceAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const SomeServiceAsyncProcessor::ProcessMap SomeServiceAsyncProcessor::binaryProcessMap_ {
  {"bounce_map", &SomeServiceAsyncProcessor::setUpAndProcess_bounce_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"binary_keyed_map", &SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const SomeServiceAsyncProcessor::ProcessMap& SomeServiceAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const SomeServiceAsyncProcessor::ProcessMap SomeServiceAsyncProcessor::compactProcessMap_ {
  {"bounce_map", &SomeServiceAsyncProcessor::setUpAndProcess_bounce_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"binary_keyed_map", &SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}}}} // apache::thrift::fixtures::types
