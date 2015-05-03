// Copyright 2016. All Rights Reserved.
// Author: pxtian2008@google.com (Xiaotian Pei)

#include "examples/helloworld/helloworld.h"

#include <string>

#include "third_party/gflags/gflags.h"

DEFINE_string(name, "World", "Name to greet");

std::string Greeting() {
  return "Hello, " + FLAGS_name;
}
