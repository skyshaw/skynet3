// Copyright 2015. All Rights Reserved.
// Author: pxtian2008@gmail.com (Xiaotian Pei)

#include "examples/coreutils/wc.h"
#include "examples/coreutils/wc_mock.h"
#include "third_party/gtest/gtest.h"
#include "third_party/glog/logging.h"


using ::testing::_;
using ::testing::DoAll;
using ::testing::Mock;
using ::testing::Return;
using ::testing::SetArrayArgument;
using coreutils::File;
using coreutils::MockFile;
using coreutils::WordCount;

TEST(WordCount, Simple) {
  MockFile mock_file;
  const char read1[] = {"hello\n"};
  const char read2[] = {"world\n"};
  const char read3[] = {"This is EOF"};
  EXPECT_CALL(mock_file, Read(_, _))
      .Times(3)
      .WillOnce(DoAll(
              SetArrayArgument<0>(read1, read1 + sizeof(read1)),
              Return(true)))
      .WillOnce(DoAll(
              SetArrayArgument<0>(read2, read2 + sizeof(read2)),
              Return(true)))
      .WillOnce(DoAll(
              SetArrayArgument<0>(read3, read3 + sizeof(read3)),
              Return(false)));
  EXPECT_CALL(mock_file, Eof())
      .Times(3)
      .WillOnce(Return(false))
      .WillOnce(Return(false))
      .WillOnce(Return(true));
  int bytes, chars, lines, words;
  WordCount(&mock_file, &bytes, &chars, &lines, &words);
  ASSERT_EQ(bytes, sizeof(read1) + sizeof(read2) + sizeof(read3) - 3);
  ASSERT_EQ(chars, sizeof(read1) + sizeof(read2) + sizeof(read3) - 3);
  ASSERT_EQ(words, 5);
  ASSERT_EQ(lines, 3);
}

int main(int argc, char **argv) {
  google::InitGoogleLogging(argv[0]);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}