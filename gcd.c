#include <stdio.h>

int main()
{
    int start, stop, step;
    scanf("%d%d%d", start, stop, step);

    int x = start;
    while (x > stop)
    {
        printf("%d%d", stop = stop + step);
    }
}