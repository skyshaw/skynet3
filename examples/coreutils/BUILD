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
