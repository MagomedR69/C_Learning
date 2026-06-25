#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age;

    printf("Укажите ваш возраст: ");
    scanf("%d", &age);

    while (age < 0 || age > 130)
    {
        printf("Возраст не может быть отрицательным!\n");
        printf("Укажите ваш возраст: ");
        scanf("%d", &age);
    }

    if (age >= 18 && age < 60)
    {
        printf("Вы совершеннолетний!\n");
    }

    else if (age < 18)
    {
        printf("Вы несовершеннолетний!\n");
    }

    else if (age >= 60 && age < 130)
    {
        printf("Вы пенсионер!\n");
    }

    return 0;
}