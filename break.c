#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("введите число: ");
    scanf("%d", &a);
    printf("введите число: ");
    scanf("%d", &b);
    if (b == 0)
    {
        printf("На ноль делить нельзя!\n");
        return 0;
    }
    if (a % b == 0)
    {
        printf("Числа делятся без остатка!\n");
        printf("ответ: %d\n", a / b);
        return 0;
    }
    else
    {
        printf("Числа не делятся без остатка!\n");
    }
    return 0;
}