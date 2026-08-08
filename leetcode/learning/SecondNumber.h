#include <stdlib.h>

int moll()
{
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("память была не выделина\n");
        return 0;
    }

    arr[2] = 46;

    int SecondResult = arr[2];
    free(arr);

    return SecondResult;
}