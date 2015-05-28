package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "strings",
    srcs = [
        "stringpiece.cc"
    ],
    hdrs = [
        "stringpiece.h"
    ],
    deps = [
        ":ascii_ctype",
    ]
)

cc_library(
    name = "ascii_ctype",
    srcs = ["ascii_ctype.cc"],
    hdrs = ["ascii_ctype.h"],
)
