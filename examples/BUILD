cc_library(
    name = "wc",
    srcs = ["wc.cc"],
    hdrs = ["wc.h"],
    deps = [
        "//third_party/glog"
    ],
)

cc_library(
    name = "wc_mock",
    testonly = 1,
    hdrs = ["wc_mock.h"],
    deps = [
        ":wc",
        "//third_party/gmock"
    ],
)

cc_test(
    name = "wc_test",
    srcs = ["wc_test.cc"],
    deps = [
        ":wc",
        ":wc_mock",
        "//third_party/gtest",
        "//third_party/glog"
    ],
)


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

cc_binary(
    name = "regex",
    srcs = ["regex.cc"],
    deps = ["//util/regexp/re2:re2"],
)

cc_binary(
    name = "str",
    srcs = [
        "str.cc",
    ],
    deps = [
        "//base",
        "//strings:ascii_ctype",
        "//strings:strings",
        "//third_party/glog:glog",
    ],
)

cc_binary(
    name = "int128",
    srcs = [
        "int128.cc"
    ],
    deps = [
        "//base",
        "//third_party/glog:glog",
    ],
)
