// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#ifndef EXAMPLES_COREUTILS_WC_H_
#define EXAMPLES_COREUTILS_WC_H_

#include <cassert>
#include <cstdio>  // TODO(xiaotian): forward declaration
#include <memory>

#include "third_party/glog/logging.h"

namespace coreutils {

class File {
 public:
  File() : file_{nullptr} {}

  File(const char* filename, const char* mode)
      : file_{std::fopen(filename, mode)} {
  }

  virtual ~File() {
    if (file_) {
      Close();
    }
  }

  virtual bool Open(const char* filename, const char* mode) {
    CHECK_EQ(file_, static_cast<FILE*>(nullptr));
    file_ = std::fopen(filename, mode);
    return file_ != nullptr;
  }

  virtual bool Close() {
    int ret = 0;
    if (file_) {
      int ret = std::fclose(file_);
      if (ret == 0) {
        file_ = nullptr;
      }
    }
    return ret == 0;
  }

  virtual int Read(char* buffer, int buf_size) {
    return std::fread(buffer, 1, buf_size, file_);
  }

  virtual bool Eof() {
    CHECK_EQ(file_, static_cast<FILE*>(nullptr));
    return std::feof(file_) != 0;
  }

 private:
  FILE* file_;
};

void WordCount(File* file, int* bytes, int* chars, int* lines, int* words);

}  // namespace coreutils

#endif  // EXAMPLES_COREUTILS_WC_H_
