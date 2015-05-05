// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#include <cassert>
#include <cstdio>

#include "re2/re2/re2.h"  // at least reduce one...

int main() {
  int year, month, day;
  RE2::FullMatch("1998 4 23", "(\\d+) (\\d+) (\\d+)", &year, &month, &day);
  std::printf("%d %d %d\n", year, month, day);
  return 0;
}
