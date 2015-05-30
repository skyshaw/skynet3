#include <iostream>
#include "base/int128.h"
#include "third_party/glog/logging.h"

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  uint128 u = 12345678;
  uint128 v = 87654321;
  uint128 w = u * v;
  (void) w;
  // std::cout << u * v << std::endl;
  return 0;
}
