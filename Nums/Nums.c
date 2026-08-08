#include "common.h"

void NUMS(const int *nums, size_t size)
{
    // Защита от нулевого указателя
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