#include "examples/hello_world/hello_world.h"

#include <stdio.h>
#include <string>

#include "third_party/gflags/gflags.h"

DEFINE_string(name, "world", "Name to output");

bool HelloWorld() {
  printf("%s\n", ("Hello, " + FLAGS_name + "!").c_str());
  return true;
}
