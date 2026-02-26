#include <stdio.h>
#include "comm_task.h"
#include "pid_task.h"

void Comm_Task(void)
{
    static int commands[] = {100, 200, 50, 150};
    static int idx = 0;
    static int counter = 0;

    counter++;

    if(counter >= 500)   // 500 ms
    {
        setpoint = commands[idx];
        printf("[COMM] New command: %d\n", setpoint);

        idx = (idx + 1) % 4;
        counter = 0;
    }
}
