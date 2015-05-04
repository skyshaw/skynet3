// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#ifndef EXAMPLES_COREUTILS_WC_H_
#define EXAMPLES_COREUTILS_WC_H_

#include <cassert>
#include <cstdio>  // TODO(xiaotian): forward declaration
#include <memory>

namespace coreutils {

class File {
 public:
  File() : file_{nullptr} {}
  virtual ~File() {
    if (file_) {
      Close();
    }
  }
  File(const char* filename, const char* mode)
      : file_{std::fopen(filename, mode)} {
  }
  virtual bool Open(const char* filename, const char* mode) {
    assert(file_ == nullptr);
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
  virtual bool Read(char* buffer, int buf_size) {
    const char* ret = std::fgets(buffer, buf_size, file_);
    return ret != nullptr;
  }
  virtual bool Eof() {
    assert(file_ == nullptr);
    return std::feof(file_) != 0;
  }

 private:
  FILE* file_;
};

void WordCount(File* file, int* bytes, int* chars, int* lines, int* words);

}  // namespace coreutils

#endif  // EXAMPLES_COREUTILS_WC_H_
