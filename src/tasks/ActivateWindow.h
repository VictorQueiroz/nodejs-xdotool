#ifndef NODE_XDOTOOL_ACTIVATE_WINDOW_TASK_H_
#define NODE_XDOTOOL_ACTIVATE_WINDOW_TASK_H_

#include "../XdoToolTask.h"

class XdoToolTask_ActivateWindow : public XdoToolTask {
public:
    XdoToolTask_ActivateWindow(xdo_t*, Window);
    void Execute() override;
    Local<Value> GetResult() override;
private:
    Window window;
};

#endif // NODE_XDOTOOL_ACTIVATE_WINDOW_TASK_H_