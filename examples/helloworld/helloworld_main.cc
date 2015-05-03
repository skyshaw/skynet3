#include <iostream>

#include "examples/helloworld/helloworld.h"
#include "third_party/glog/logging.h"

int main(int argc, char** argv) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Starting hello-world-main...";
  std::cout << HelloWorld() << std::endl;
  return 0;
}
