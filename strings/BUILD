package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "strings",
    srcs = [
        "case.cc",
        "escaping.cc",
        "numbers.cc",
        "stringpiece.cc"
    ],
    hdrs = [
        "case.h",
        "escaping.h",
        "fastmem.h",
        "numbers.h",
        "stringpiece.h"
    ],
    deps = [
        ":ascii_ctype",
        "//base",
        "//util/gtl:stl_util",
        "//util/hash:hash"
    ]
)

cc_library(
    name = "ascii_ctype",
    srcs = ["ascii_ctype.cc"],
    hdrs = ["ascii_ctype.h"],
)
