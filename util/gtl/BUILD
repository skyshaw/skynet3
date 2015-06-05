package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "algorithm",
    hdrs = [
        "algorithm.h",
    ],
)

cc_library(
    name = "stl_util",
    hdrs = [
        "stl_util.h",
    ],
    deps = [
        ":algorithm",
         "//base",
    ],
)
