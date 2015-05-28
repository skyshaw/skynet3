#include <iostream>
#include "base/stringprintf.h"
#include "base/strtoint.h"
#include "strings/ascii_ctype.h"
#include "third_party/glog/logging.h"

void ascii() {
  for (int ch = 'A'; ch <= 'Z'; ++ch) {
    std::cout << ascii_tolower(ch);
  }
  std::cout << std::endl;
  for (int ch = 'a'; ch <= 'z'; ++ch) {
    std::cout << ascii_toupper(ch);
  }
  std::cout << std::endl;
}

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  string greeting = StringPrintf("%s %s", "hello", "world");
  std::cout << greeting << std::endl;
  std::cout << atoi64("1234567") << std::endl;
  ascii();
  return 0;
}
