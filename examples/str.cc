#include <iostream>
#include "base/stringprintf.h"
#include "base/strtoint.h"
#include "strings/ascii_ctype.h"
#include "strings/split.h"
#include "strings/strcat.h"
#include "strings/strip.h"
#include "third_party/glog/logging.h"

void AsciiEx() {
  for (int ch = 'A'; ch <= 'Z'; ++ch) {
    std::cout << ascii_tolower(ch);
  }
  std::cout << std::endl;
  for (int ch = 'a'; ch <= 'z'; ++ch) {
    std::cout << ascii_toupper(ch);
  }
  std::cout << std::endl;
}

void StrCatEx() {
  std::cout << StrCat("hello ", "world") << '\n';
  std::cout << StrCat("hello ", 134) << '\n';
}

void SplitEx() {
  std::string str = "1,2,3,hello,world,5,6,7";
  auto v = strings::Split(str, ",");
  for (auto s : v) {
    std::cout << s << ' ';
  }
  std::cout << '\n';
}

void StripEx() {
  std::string str = "    hello world   ";
  StripWhitespace(&str);
  std::cout << str << '\n';
}

int main(int argc, char** argv) {
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  string greeting = StringPrintf("%s %s", "hello", "world");
  std::cout << greeting << std::endl;
  std::cout << atoi64("1234567") << std::endl;
  AsciiEx();
  StrCatEx();
  SplitEx();
  StripEx();
  return 0;
}
