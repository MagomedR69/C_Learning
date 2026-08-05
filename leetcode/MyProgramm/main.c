#include <stdio.h>
#include <stdlib.h>

void TwoSum(int size, int target, int *nums)
{

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("числа под индексом [%d;%d]\n", i, j);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("таких чисел не было найдено!\n");
    }
}