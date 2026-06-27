#include <stdio.h>

int main()
{
    double a, b;
    char op;

    printf("Введите выражение: ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
    case '+':
        printf("Ответ: %.2lf\n", a + b);
        break;

    case '-':
        printf("Ответ: %.2lf\n", a - b);
        break;

    case '*':
        printf("Ответ: %.2lf\n", a * b);
        break;

    case '/':
        if (b == 0)
        {
            printf("На ноль делить нельзя!\n");
        }
        else
        {
            printf("Ответ: %.2lf\n", a / b);
        }
        break;

    default:
        printf("Неизвестная операция!\n");
    }

    return 0;
}