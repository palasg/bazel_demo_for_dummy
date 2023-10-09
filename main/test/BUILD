
cc_test(
    name = "MyTest",
    srcs = ["hello_greet_test.cpp"],
    deps = ["//main:greetings",
           "@com_google_googletest//:gtest_main"],
    copts = ["-Imain/includes"],
)