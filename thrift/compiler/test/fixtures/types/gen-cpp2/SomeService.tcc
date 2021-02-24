/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/types/gen-cpp2/SomeService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace apache { namespace thrift { namespace fixtures { namespace types {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>,  ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::integral, ::apache::thrift::type_class::string>,  ::apache::thrift::fixtures::types::SomeMap*>> SomeService_bounce_map_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::list<::apache::thrift::type_class::integral>, ::std::vector<int64_t>*>> SomeService_binary_keyed_map_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::map<::apache::thrift::type_class::binary, ::apache::thrift::type_class::integral>, ::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>*>> SomeService_binary_keyed_map_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::setUpAndProcess_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &SomeServiceAsyncProcessor::process_bounce_map<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::process_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  SomeService_bounce_map_pargs args;
  auto uarg_m = std::make_unique< ::apache::thrift::fixtures::types::SomeMap>();
  args.get<0>().value = uarg_m.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "SomeService.bounce_map", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "bounce_map");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr< ::apache::thrift::fixtures::types::SomeMap>>>(std::move(req), std::move(ctxStack), return_bounce_map<ProtocolIn_,ProtocolOut_>, throw_wrapped_bounce_map<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_bounce_map(std::move(callback), std::move(uarg_m));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue SomeServiceAsyncProcessor::return_bounce_map(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::apache::thrift::fixtures::types::SomeMap const& _return) {
  ProtocolOut_ prot;
  SomeService_bounce_map_presult result;
  result.get<0>().value = const_cast< ::apache::thrift::fixtures::types::SomeMap*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("bounce_map", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void SomeServiceAsyncProcessor::throw_wrapped_bounce_map(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "bounce_map");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::setUpAndProcess_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, iface_)) {
    return;
  }
  auto scope = iface_->getRequestExecutionScope(ctx, apache::thrift::concurrency::NORMAL);
  ctx->setRequestExecutionScope(std::move(scope));
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &SomeServiceAsyncProcessor::process_binary_keyed_map<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void SomeServiceAsyncProcessor::process_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getRequestContext is null
  // so async calls don't accidentally use it
  iface_->setRequestContext(nullptr);
  SomeService_binary_keyed_map_pargs args;
  auto uarg_r = std::make_unique<::std::vector<int64_t>>();
  args.get<0>().value = uarg_r.get();
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "SomeService.binary_keyed_map", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), std::move(serializedRequest).uncompress(), ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "binary_keyed_map");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<std::unique_ptr<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>>>>(std::move(req), std::move(ctxStack), return_binary_keyed_map<ProtocolIn_,ProtocolOut_>, throw_wrapped_binary_keyed_map<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_binary_keyed_map(std::move(callback), std::move(uarg_r));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue SomeServiceAsyncProcessor::return_binary_keyed_map(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t> const& _return) {
  ProtocolOut_ prot;
  SomeService_binary_keyed_map_presult result;
  result.get<0>().value = const_cast<::std::map< ::apache::thrift::fixtures::types::TBinary, int64_t>*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("binary_keyed_map", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void SomeServiceAsyncProcessor::throw_wrapped_binary_keyed_map(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "binary_keyed_map");
    return;
  }
}


}}}} // apache::thrift::fixtures::types
