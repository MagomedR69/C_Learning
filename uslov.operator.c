#include <stdio.h>
int main()
{
    float x;
    printf("input x: ");
    scanf("%f", &x);

    if (x >= 5.5)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}
