/*
 * Copyright 2017-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <atomic>

#include <folly/portability/GMock.h>

#include <folly/io/async/ScopedEventBaseThread.h>
#include <thrift/lib/cpp2/transport/core/testutil/gen-cpp2/IntermHeaderService.tcc>
#include <thrift/lib/cpp2/transport/core/testutil/gen-cpp2/TestService.tcc>

namespace testutil {
namespace testservice {

class TestServiceMock : public TestServiceSvIf {
 public:
  using EmptyArgs = apache::thrift::ThriftPresult<false>;
  using EmptyResult = apache::thrift::ThriftPresult<true>;

  MOCK_METHOD2(sumTwoNumbers_, int32_t(int32_t, int32_t));
  MOCK_METHOD1(add_, int32_t(int32_t));
  MOCK_METHOD2(addAfterDelay_, void(int32_t, int32_t));
  MOCK_METHOD1(onewayThrowsUnexpectedException_, void(int32_t));
  MOCK_METHOD1(hello_, std::string(const std::string&));
  MOCK_METHOD1(checkPort_, void(int32_t));

  int32_t sumTwoNumbers(int32_t x, int32_t y) override;

  int32_t add(int32_t x) override;

  void addAfterDelay(int32_t delayMs, int32_t x) override;

  void onewayThrowsUnexpectedException(int32_t delayMs) override;

  void throwExpectedException(int32_t x) override;

  void throwUnexpectedException(int32_t x) override;

  void sleep(int32_t timeMs) override;

  void headers() override;

  void hello(std::string& result, std::unique_ptr<std::string> name) override;

  void checkPort(int32_t port) override;

 protected:
  std::atomic<int32_t> sum{0};
};

class IntermHeaderService : public IntermHeaderServiceSvIf {
 public:
  IntermHeaderService(std::string const& host, int16_t port);
  virtual ~IntermHeaderService();

  int32_t callAdd(int32_t) override;

 private:
  std::unique_ptr<TestServiceAsyncClient> client_;
  folly::ScopedEventBaseThread evbThread_;
};

} // namespace testservice
} // namespace testutil
