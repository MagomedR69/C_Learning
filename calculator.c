#include <stdio.h>

int main()
{
    double a, b;
    char op;

    printf("введите выражение: ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("ответ:  %.2f\n", a + b);
        break;

    case '-':
        printf("ответ:  %.2f\n", a - b);
        break;

    case '*':
        printf("ответ:  %.2f\n", a * b);
        break;

    case '/':
        if (b == 0)
        {
            printf("на ноль делить нельзя!\n");
            break;
        }

        else
        {
            printf("ответ:  %.2f\n", a / b);
        }
        break;

    default:
        printf("неизвестная операция!\n");
        break;
    }

    return 0;
}