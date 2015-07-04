#include <iostream>
#include <set>

#include "third_party/glog/logging.h"
#include "third_party/gflags/gflags.h"
#include "util/gtl/stl_util.h"

void SetDifferenceEx() {
  std::set<int> a{1, 2, 3, 4};
  std::set<int> b{3, 4, 5, 6};
  std::set<int> c;
  STLSetDifference(a, b, &c);
  for (int e : c) {
    std::printf("%d ", e);
  }
  std::printf("\n");
}

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  SetDifferenceEx();
  return 0;
}
