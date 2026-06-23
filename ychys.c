#include <stdio.h>

int main()
{
    int age;

    printf("укажите ваш возраст: ");
    scanf("%d", &age);

    if (age >= 18 && age < 60)
    {
        printf("Вы совершеннолетний!\n");
    }

    else if (age < 18)
    {
        printf("Вы несовершеннолетний!\n");
    }

    else
        (age >= 60);
    {
        printf("Вы пенсионер!\n");
    }
    return 0;
}