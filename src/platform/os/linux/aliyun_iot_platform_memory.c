#include "aliyun_iot_platform_memory.h"


void *aliyun_iot_memory_malloc(uint32_t size)
{
    return malloc(size);
}

void aliot_platform_free(void *ptr)
{
    free(ptr);
    return;
}
