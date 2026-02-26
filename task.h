#ifndef TASK_H
#define TASK_H

#include "FreeRTOS.h"

typedef void (*TaskFunction_t)(void*);
typedef void* TaskHandle_t;

#ifdef _WIN32
#include <windows.h>
#define delay_ms(x) Sleep(x)
#else
#include <unistd.h>
#define delay_ms(x) usleep((x)*1000)
#endif

static inline void vTaskDelay(TickType_t ticks)
{
    delay_ms(ticks);
}

#endif
