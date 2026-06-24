#include <stdio.h>

int main()
{
    for (float i = 10601; i >= 60; i /= 5)
    {
        printf("%.2f\n", i);
    }

    return 0;
}