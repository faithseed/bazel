#include <ctime>
#include "glog/logging.h"
#include "gflags/gflags.h"

DECLARE_bool(logtostderr);
int main(int argc, char *argv[]) {
  FLAGS_logtostderr = true;
  google::InstallFailureSignalHandler();
  google::SetUsageMessage("hello");
  google::ParseCommandLineFlags(&argc, &argv, false);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Hello World!";
  return 0;
}
