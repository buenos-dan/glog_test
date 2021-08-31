#include <glog/logging.h>

int main(int argc, char **argv)
{
    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir = "./log/";
    FLAGS_alsologtostderr = true;
    LOG(INFO) << "-------------000";
    LOG(ERROR) << "-------------123";
    google::ShutdownGoogleLogging();
    return 0;
}