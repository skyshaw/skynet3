#include "examples/helloworld/helloworld.h"
#include "third_party/gflags/gflags.h"
#include "third_party/gtest/gtest.h"

DECLARE_string(name);
TEST(HelloWorldTest, HelloWorld) {
  ASSERT_EQ(HelloWorld(), "Hello, World");
  FLAGS_name = "Tom";
  ASSERT_EQ(HelloWorld(), "Hello, Tom");

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
