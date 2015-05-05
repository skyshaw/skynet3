// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#include  <cstdlib>

#include "examples/coreutils/wc.h"
#include "third_party/glog/logging.h"

namespace coreutils {

void WordCount(File* file, int* bytes, int* chars, int* lines, int* words) {
  *bytes = 0;
  *chars = 0;
  *lines = 0;
  *words = 0;
  int kMaxBufferSize = 4096;
  char buffer[kMaxBufferSize];
  bool inword = false;
  while (true) {
    int nread = file->Read(buffer, sizeof buffer);
    int i = 0;
    for (i = 0; i < nread; ++i) {
      const char ch = buffer[i];
      if (ch == '\n') {
        ++*lines;
        inword = false;
      } else if (std::isspace(ch)) {
        inword = false;
      } else {
        if (!inword) {
          ++*words;
          inword = true;
        }
      }
    }
    *bytes += i;  // TODO(xiaotian): fix it.
    *chars += i;
    if (file->Eof()) {  // TODO(xiaotian): fix failure?
      if (*bytes) {
        ++*lines;
      }
      break;
    }
  }
}

}  // namespace coreutils
