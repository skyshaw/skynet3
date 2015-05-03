#include "third_party/glog/logging.h"
#include "examples/hello_world/hello_world.h"

int main(int argc, char** argv) {
  google::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Starting hello-world-main...";
  HelloWorld();
  return 1;
}
