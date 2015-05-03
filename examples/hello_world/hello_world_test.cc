#include "third_party/gtest/gtest.h"
#include "examples/hello_world/hello_world.h"

TEST(HelloWorldTest, HelloWorld) {
  ASSERT_TRUE(HelloWorld());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
