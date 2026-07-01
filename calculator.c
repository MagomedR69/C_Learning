#include <stdio.h>

int main()
{
    double a, b;
    char op;
    printf("КАЛЬКУЛЯТОР\n");
    printf("для выхода нажмите Ctrl+c\n");
    while (1)
    {
        printf("введите выражение: ");
        int result = scanf("%lf %c %lf", &a, &op, &b);

        if (result != 3)
        {
            printf("Неверный ввод!\n");
            break;
        }

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
    }
}