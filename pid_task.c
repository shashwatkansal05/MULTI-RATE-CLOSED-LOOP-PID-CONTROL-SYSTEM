#include <stdio.h>
#include "pid_task.h"

int setpoint = 0;
int position = 0;
int output = 0;

void PID_Task(void)
{
    output = setpoint - position;
    position += output / 10;
}
