// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#ifndef EXAMPLES_COREUTILS_WC_MOCK_H_
#define EXAMPLES_COREUTILS_WC_MOCK_H_

#include "examples/coreutils/wc.h"
#include "third_party/gmock/gmock.h"

namespace coreutils {

class MockFile : public File {
 public:
  MOCK_METHOD2(Open, bool(const char* filename, const char* mode));
  MOCK_METHOD0(Close, bool());
  MOCK_METHOD2(Read, bool(char* buffer, int buf_size));
  MOCK_METHOD0(Eof, bool());
};

}  // namespace coreutils

#endif  // EXAMPLES_COREUTILS_WC_MOCK_H_

