/*
 * Copyright 2017-present Facebook, Inc.
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#include <folly/portability/GTest.h>
#include <thrift/lib/cpp2/test/gen-cpp2/TestService.h>
#include <thrift/lib/cpp2/server/ThriftServer.h>
#include <thrift/lib/cpp2/async/HeaderClientChannel.h>
#include <thrift/lib/cpp2/async/RequestChannel.h>

#include <folly/io/async/EventBase.h>
#include <thrift/lib/cpp/async/TAsyncSocket.h>
#include <thrift/lib/cpp2/util/ScopedServerThread.h>

#include <thrift/lib/cpp2/test/util/TestThriftServerFactory.h>
#include <thrift/lib/cpp2/test/util/TestInterface.h>

#include <memory>

using namespace apache::thrift;
using namespace apache::thrift::test;
using namespace apache::thrift::util;
using namespace apache::thrift::async;

class CloseChecker : public CloseCallback {
 public:
  CloseChecker() : closed_(false) {}
  void channelClosed() override { closed_ = true; }
  bool getClosed() {
    return closed_;
  }
 private:
  bool closed_;
};

TEST(ThriftServer, IdleTimeoutTest) {
  apache::thrift::TestThriftServerFactory<TestInterface> factory;
  factory.idleTimeoutMs(10);
  ScopedServerThread sst(factory.create());

  folly::EventBase base;
  std::shared_ptr<TAsyncSocket> socket(
    TAsyncSocket::newSocket(&base, *sst.getAddress()));

  auto client_channel = HeaderClientChannel::newChannel(socket);
  CloseChecker checker;
  client_channel->setCloseCallback(&checker);
  base.tryRunAfterDelay([&base](){
      base.terminateLoopSoon();
    }, 100);
  base.loopForever();
  EXPECT_TRUE(checker.getClosed());
  client_channel->setCloseCallback(nullptr);
}

TEST(ThriftServer, NoIdleTimeoutWhileWorkingTest) {
  apache::thrift::TestThriftServerFactory<TestInterface> factory;
  factory.idleTimeoutMs(10);
  ScopedServerThread sst(factory.create());

  folly::EventBase base;
  std::shared_ptr<TAsyncSocket> socket(
    TAsyncSocket::newSocket(&base, *sst.getAddress()));

  auto client_channel = HeaderClientChannel::newChannel(socket);
  auto client_channelp = client_channel.get();
  CloseChecker checker;

  client_channel->setCloseCallback(&checker);
  TestServiceAsyncClient client(std::move(client_channel));
  std::string ret;
  client.sync_sendResponse(ret, 20);

  client.sync_sendResponse(ret, 20);

  EXPECT_FALSE(checker.getClosed());
  client_channelp->setCloseCallback(nullptr);
}

TEST(ThriftServer, IdleTimeoutAfterTest) {
  apache::thrift::TestThriftServerFactory<TestInterface> factory;
  factory.idleTimeoutMs(10);
  ScopedServerThread sst(factory.create());

  folly::EventBase base;

  std::shared_ptr<TAsyncSocket> socket(
    TAsyncSocket::newSocket(&base, *sst.getAddress()));

  auto client_channel = HeaderClientChannel::newChannel(socket);
  auto client_channelp = client_channel.get();
  CloseChecker checker;

  client_channel->setCloseCallback(&checker);
  TestServiceAsyncClient client(std::move(client_channel));
  std::string ret;
  client.sync_sendResponse(ret, 20);

  EXPECT_FALSE(checker.getClosed());

  base.tryRunAfterDelay([&base](){
      base.terminateLoopSoon();
    }, 200);
  base.loopForever();
  EXPECT_TRUE(checker.getClosed());
  client_channelp->setCloseCallback(nullptr);
}
