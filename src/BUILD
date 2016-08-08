load('//:grpc_proto.bzl', 'proto_library')

cc_binary(
    name = 'greeter_client',
    srcs = ['greeter_client.cc'],
    deps = [
        ':helloworld_proto',
        '@grpc//:grpc++',
        "//third_party/gflags:gflags",
        "//third_party/glog:glog",
    ],
    linkopts = ['-ldl'],
)

cc_binary(
    name = 'greeter_server',
    srcs = ['greeter_server.cc'],
    deps = [
        ':helloworld_proto',
        '@grpc//:grpc++',
        "//third_party/gflags:gflags",
        "//third_party/glog:glog",
    ],
    linkopts = ['-ldl'],
)

proto_library(
    name = 'helloworld_proto',
    src = 'helloworld.proto',
    has_service = True,
)

cc_binary(
  name = "hello",
  srcs = [
    "hello.cc"
  ],
  deps = [
    "//third_party/gflags",
    "//third_party/glog",
  ],
)

cc_test(
  name = "hello_test",
  srcs = [
    "hello_test.cc",
  ],
  deps = [
    "//third_party/gtest:gtest_main",
  ],
)

cc_test(
  name = "btree_test",
  copts = [ "-fpermissive" ],
  srcs = [
    "btree_test.cc",
    "btree_test.h",
    "btree_test_flags.cc",
  ],
  deps = [
    "//third_party/gtest:gtest_main",
    "//third_party/btree:btree",
    "//third_party/gflags:gflags",
  ],
)
