#include  "cyber/scheduler/scheduler_factory.h"
#include  "cyber/common/global_data.h"
#include "cyber/sysmo/sysmo.h"
#include "cyber/state.h"
#include "cyber/task/task_manager.h"
#include "cyber/timer/timing_wheel.h"
#include <functional>
#include <thread>
#include <mutex>


namespace apollo {
namespace cyber {


using apollo::cyber::common::GlobalData;

bool g_atexit_registered = false;
std::mutex g_mutex;


void OnShutdown(int sig) {
  (void)sig;
  if (apollo::cyber::GetState() != apollo::cyber::STATE_SHUTDOWN) {
    apollo::cyber::SetState(apollo::cyber::STATE_SHUTTING_DOWN);
  }
}
void Clear();
void ExitHandle() { Clear(); }


bool Init() {
    apollo::cyber::SysMo::Instance();
    apollo::cyber::scheduler::Instance();

    std::signal(SIGINT, OnShutdown);
    // Register exit handlers
    if (!g_atexit_registered) {
      if (std::atexit(ExitHandle) != 0) {
        AERROR << "Register exit handle failed";
        return false;
      }
      AINFO << "Register exit handle succ.";
      g_atexit_registered = true;
    }
    apollo::cyber::SetState(apollo::cyber::STATE_INITIALIZED);
    return true;
}

void Clear() {
  std::lock_guard<std::mutex> lg(g_mutex);
  if (apollo::cyber::GetState() == apollo::cyber::STATE_SHUTDOWN || apollo::cyber::GetState() == apollo::cyber::STATE_UNINITIALIZED) {
    return;
  }
  apollo::cyber::SysMo::CleanUp();
  apollo::cyber::TaskManager::CleanUp();
  apollo::cyber::TimingWheel::CleanUp();
  apollo::cyber::scheduler::CleanUp();

  apollo::cyber::SetState(apollo::cyber::STATE_SHUTDOWN);
}

}
}