#include <stdio.h>

int main()
{
    int money = 1000;
    int op = 0;
    int sum;
    printf("|Банкомат|\n");

    while (1)
    {
        printf("выберете действие от 1 до 3\n");
        printf("1-посмотреть счет\n2-пополнить баланс\n3-выход\n");
        printf("действие:");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("ваш счет равен:%d\n", money);
            break;
        case 2:
            printf("на сколько вы хотите пополнить счет:");
            scanf("%d", &sum);
            money += sum;
            printf("отлично ваш счет равен:%d\n", money);
            break;
        case 3:
            return 0;
        default:
            printf("вы ввели неизвестную операцию\n");
        }
    }
    return 0;
}