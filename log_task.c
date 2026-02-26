#include <stdio.h>
#include "log_task.h"
#include "pid_task.h"

void Log_Task(void)
{
    static int counter = 0;

    counter++;

    if(counter >= 100)   // 100 ms
    {
        printf("[LOG] Position=%d Output=%d\n", position, output);
        counter = 0;
    }
}
