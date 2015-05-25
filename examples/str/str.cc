#include <iostream>
#include "base/stringprintf.h"
#include "third_party/glog/logging.h"


int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  string greeting = StringPrintf("%s %s", "hello", "world");
  std::cout << greeting << std::endl;
  return 0;
}
