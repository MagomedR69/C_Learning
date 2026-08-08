#include <stdlib.h>
#include <stdio.h>

int main()
{
    int *nums = (int *)malloc(5 * sizeof(int));

    if (nums == NULL)
    {
        return 0;
    }

    nums[0] = 5;
    nums[1] = 4;
    nums[2] = 15;
    nums[3] = 53;
    nums[4] = 544;

    printf("%d\n%d\n%d\n%d\n%d\n", nums[0], nums[1], nums[2], nums[3], nums[4]);

    free(nums);
}