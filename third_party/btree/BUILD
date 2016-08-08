# Bazel build file for btree

licenses(["notice"])

cc_inc_library(
  visibility = ["//visibility:public"],
  name = "btree",
  hdrs = glob(["*.h"]),
  deps = [":btree_lib"],
)

cc_library(
  name = "btree_lib",
  hdrs = glob(["*.h"]),
  includes = ["."],
)
