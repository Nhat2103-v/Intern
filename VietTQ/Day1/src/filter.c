#include "filter.h"

uint16_t filter_apply(uint16_t raw)
{
    return (uint16_t)(raw / 2u);
}