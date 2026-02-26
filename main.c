#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "pid_task.h"
#include "comm_task.h"
#include "log_task.h"

void system_init(void);

int main(void)
{
    system_init();

    while(1)
    {
        PID_Task();      // 1 ms task
        Comm_Task();     // command task
        Log_Task();      // logging task

        vTaskDelay(1);   // 1 ms tick
    }

    return 0;
}
