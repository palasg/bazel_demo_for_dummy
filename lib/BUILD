load ("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "hello-time", 
    srcs = ["srcs/get_time.cpp"],
    hdrs = ["includes/get_time.hpp"],
    copts = ["-Ilib/includes"],
    visibility = ["//main:__pkg__"],
)