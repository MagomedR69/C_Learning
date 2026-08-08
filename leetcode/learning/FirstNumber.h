#include <stdlib.h>
#include <stdio.h>

int mall()
{
    int *a = (int *)malloc(sizeof(int));

    if (a == NULL)
    {
        printf("память была не выделeна\n");
        return 0;
    }

    *a = 40;

    int FirstResult = *a;
    free(a);

    return FirstResult;
}