#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int count = 0;
    int num;

    while (scanf("%d", &num) == 1)
    {
        count++;
        int *temp = realloc(arr, count * sizeof(int));
        if (temp != NULL)
        {
            arr = temp;
        }
        else if (temp == NULL)
        {
            printf("память не была выделенна!\n");
            free(arr);
            return 1;
        }
    }
    free(arr);
    return 0;
}