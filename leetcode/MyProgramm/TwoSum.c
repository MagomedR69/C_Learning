#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

int main()
{
    int size = 5;
    int target = 15;

    int *nums = malloc(size * sizeof(int));

    if (nums == NULL)
    {
        printf("память небыла выделена!");
        return 0;
    }

    nums[0] = 4;
    nums[1] = 3;
    nums[2] = 6;
    nums[3] = 1;
    nums[4] = 9;

    TwoSum(size, target, nums);

    free(nums);
    return 0;
}
