package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "strings",
    srcs = [
        "case.cc",
        "escaping.cc",
        "numbers.cc",
        "split.cc",
        "strcat.cc",
        "stringpiece.cc",
        "util.cc",
    ],
    hdrs = [
        "case.h",
        "escaping.h",
        "fastmem.h",
        "numbers.h",
        "split.h",
        "strcat.h",
        "stringpiece.h",
        "util.h",
    ],
    deps = [
        ":ascii_ctype",
        "//base",
        "//util/gtl:stl_util",
        "//util/hash:hash",
    ]
)

cc_library(
    name = "ascii_ctype",
    srcs = ["ascii_ctype.cc"],
    hdrs = ["ascii_ctype.h"],
)
