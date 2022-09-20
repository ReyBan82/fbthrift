/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace test {
namespace namespace_from_package {
namespace module {


folly::Future<int64_t>
TestServiceClientWrapper::init(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_int1) {
  auto* client = static_cast<::test::namespace_from_package::module::TestServiceAsyncClient*>(async_client_.get());
  folly::Promise<int64_t> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<int64_t>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_init, channel_);
  try {
    client->init(
      rpcOptions,
      std::move(callback),
      arg_int1
    );
  } catch (const std::exception& ex) {
    return folly::makeFuture<int64_t>(folly::exception_wrapper(
      std::current_exception(), ex
    ));
  }
  return _future;
}

} // namespace test
} // namespace namespace_from_package
} // namespace module
