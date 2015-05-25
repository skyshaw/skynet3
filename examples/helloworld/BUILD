cc_library(
    name = "helloworld_lib",
    srcs = ["helloworld.cc"],
    hdrs = ["helloworld.h"],
    deps = [
        "//third_party/gflags",
        "//third_party/glog",
    ],
    linkstatic = 1,
)

cc_binary(
    name = "helloworld",
    srcs = ["helloworld_main.cc"],
    deps = [
        ":helloworld_lib",
    ],
)

cc_test(
    name = "helloworld_test",
    srcs = ["helloworld_test.cc"],
    deps = [
        "//gtest:gtest",
        ":helloworld_lib"
    ]
)

cc_test(
    name = "helloworld2_test",
    srcs = ["helloworld2_test.cc"],
    deps = [
        "//gtest:main",
        ":helloworld_lib"
    ]
)
