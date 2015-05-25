// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#include "examples/helloworld/helloworld.h"
#include "third_party/gflags/gflags.h"
#include "gtest/gtest.h"

DECLARE_string(name);
TEST(GreetingTest, Greeting) {
  ASSERT_EQ(Greeting(), "Hello, World");
  FLAGS_name = "Tom";
  ASSERT_EQ(Greeting(), "Hello, Tom");
}
