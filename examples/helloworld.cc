// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#include "examples/helloworld.h"

#include <string>

#include "third_party/gflags/gflags.h"

DEFINE_string(name, "World", "Name to greet");

std::string Greeting() {
  return "Hello, " + FLAGS_name;
}
