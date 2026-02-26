#ifndef PID_TASK_H
#define PID_TASK_H

#include "FreeRTOS.h"

extern int setpoint;
extern int position;
extern int output;

void PID_Task(void);

#endif
