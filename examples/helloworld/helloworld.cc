#include "examples/helloworld/helloworld.h"

#include <string>

#include "third_party/gflags/gflags.h"

DEFINE_string(name, "World", "Name to greet");

std::string HelloWorld() {
  return "Hello, " + FLAGS_name;
}
