package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "strings",
    srcs = [
        "case.cc",
        "charset.cc",
        "escaping.cc",
        "numbers.cc",
        "split.cc",
        "strcat.cc",
        "stringpiece.cc",
        "strip.cc",
        "substitute.cc",
        "util.cc",
    ],
    hdrs = [
        "case.h",
        "charset.h",
        "escaping.h",
        "fastmem.h",
        "numbers.h",
        "split.h",
        "strcat.h",
        "stringpiece.h",
        "strip.h",
        "substitute.h",
        "util.h",
    ],
    deps = [
        ":ascii_ctype",
        "//base",
        "//util/gtl:charmap",
        "//util/gtl:stl_util",
        "//util/hash:hash",
        "//util/utf",
    ]
)

cc_library(
    name = "ascii_ctype",
    srcs = ["ascii_ctype.cc"],
    hdrs = ["ascii_ctype.h"],
)
