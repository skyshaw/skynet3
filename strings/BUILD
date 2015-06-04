package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "strings",
    srcs = [
        "stringpiece.cc"
    ],
    hdrs = [
        "fastmem.h",
        "stringpiece.h"
    ],
    deps = [
        ":ascii_ctype",
        "//base"
    ]
)

cc_library(
    name = "ascii_ctype",
    srcs = ["ascii_ctype.cc"],
    hdrs = ["ascii_ctype.h"],
)
