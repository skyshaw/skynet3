package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "case_insensitive_hash",
    hdrs = [
        "case_insensitive_hash.h",
    ],
    deps = [
        "//base",
        "//strings:ascii_ctype",
    ],
)

cc_library(
    name = "hash",
    srcs = [
        "hash.cc",
    ],
    hdrs = [
        "hash.h",
    ],
    deps = [
        ":case_insensitive_hash",
        "//base",
    ],
)

