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
