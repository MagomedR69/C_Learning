#include "common.h"

void cycle(const int *nums, size_t size, int target)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("числа: %d и %d\n", nums[i], nums[j]);
                found = true;
            }
        }
    }
    if (found == false)
    {
        printf("таких пар не нашли!\n");
    }
}
