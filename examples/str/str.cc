#include <iostream>
#include "base/stringprintf.h"
#include "base/strtoint.h"
#include "third_party/glog/logging.h"


int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  string greeting = StringPrintf("%s %s", "hello", "world");
  std::cout << greeting << std::endl;
  std::cout << atoi64("1234567") << std::endl;
  return 0;
}
