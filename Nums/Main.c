#include "common.h"
#include "Nums.h"
#include "cycle.h"

int main()
{
    int target;
    printf("введите искомое число: \n");

    if (scanf("%d", &target) != 1)
    {
        printf("введите верное искомое число!\n");
        return 1;
    }

    size_t size = 5;
    int *nums = malloc(size * sizeof(int));

    if (nums == NULL)
    {
        printf("память не была выделена!\n");
        return 1;
    }
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;
    nums[3] = 4;
    nums[4] = 5;

    NUMS(nums, size);
    cycle(nums, size, target);

    free(nums);
    return 0;
}