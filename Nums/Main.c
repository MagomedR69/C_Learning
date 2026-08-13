#include "common.h"
#include "Nums.h"
#include "cycle.h"

int main()
{
    int target;
    printf("введите искомое число: ");

    if (scanf("%d", &target) != 1)
    {
        printf("введите верное искомое число!\n");
        return 1;
    }

    size_t size = 10;
    int *nums = malloc(size * sizeof(int));

    if (nums == NULL)
    {
        printf("память не была выделена!\n");
        return 1;
    }

    for (size_t i = 0; i < size; i++)
    {
        nums[i] = (int)i;
    }

    NUMS(nums, size);
    cycle(nums, size, target);

    free(nums);
    return 0;
}