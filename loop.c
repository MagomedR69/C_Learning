#include <stdio.h>

int main()
{
    for (float i = 100033.7; i >= 0; i /= 1.1)
    {
        printf("%.2f\n", i);
    }

    return 0;
}