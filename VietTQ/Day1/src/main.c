#include <stdio.h>
#include "sensor.h"
#include "filter.h"

#ifndef FW_VERSION
#define FW_VERSION 2
#endif

int main(void)
{
    printf("FW v%d | %d sensors | raw=%u\n",
           FW_VERSION, SENSOR_COUNT, filter_apply(sensor_read()));
    return 0;
}