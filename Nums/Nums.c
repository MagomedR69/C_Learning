#include "common.h"

void NUMS(const int *nums, size_t size)
{
    if (nums == NULL)
    {
        printf("Ошибка: передан нулевой указатель!\n");
        return;
    }

    for (size_t i = 0; i < size; i++)
    {
        printf("%d\n", nums[i]);
    }
}