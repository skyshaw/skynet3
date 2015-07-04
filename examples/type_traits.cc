#include <cstdlib>
#include <iostream>
#include <set>

#include "base/type_traits.h"
#include "third_party/glog/logging.h"
#include "third_party/gflags/gflags.h"

void EnableIfEx() {
  base::enable_if<true, int>::type a = 1;
  std::printf("%d\n", a);
}

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  EnableIfEx();
  return 0;
}
