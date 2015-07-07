cc_library(
    name = "benchmark",
    srcs = glob(
        ["src/*.cc"],
        exclude = ["src/re_posix.cc"],
    ),
    hdrs = glob(["src/*.h"]),
    includes = [
        "include",
        "include/benchmark/",
    ],
    linkopts = ["-pthread"],
    visibility = ["//visibility:public"],
)
