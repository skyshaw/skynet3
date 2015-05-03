cc_library(
    name = "hello_world_lib",
    srcs = ["hello_world.cc"],
    hdrs = ["hello_world.h"],
    deps = [
        "//third_party/gflags",
        "//third_party/glog",
    ],
    linkstatic = 1,
)

cc_binary(
    name = "hello_world",
    srcs = ["hello_world_main.cc"],
    deps = [
        ":hello_world_lib",
    ],
)

cc_test(
    name = "hello_world_test",
    srcs = ["hello_world_test.cc"],
    deps = [
        "//third_party/gtest",
        ":hello_world_lib"
    ]
)
