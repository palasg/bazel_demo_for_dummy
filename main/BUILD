load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "greetings",
    srcs = ["srcs/hello_greet.cpp"],
    hdrs =["includes/hello_greet.hpp"],
    copts = ["-Imain/includes"], 
    visibility = ['//visibility:public'],
)

cc_binary(
    name = "hello-frodo", 
    srcs = ["srcs/hello_world_main.cpp"],
    deps = [
        ":greetings", 
        "//lib:time-utils",
    ],
    copts =[
        "-Imain/includes",
        "-Ilib/includes",
    ]
)