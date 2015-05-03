// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#include <iostream>

#include "examples/helloworld/helloworld.h"
#include "third_party/glog/logging.h"

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Greeting";
  std::cout << Greeting() << std::endl;
  return 0;
}
