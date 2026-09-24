#include <stdio.h>

typedef struct
{
    char name[50];
    int tall;
    int high;
} info;

typedef struct
{
    int age;
    info all;
} people;

int main()
{
    people andrey;
    scanf("введите данные:%s %d %d %d", andrey.all.name, &andrey.age, &andrey.all.tall, &andrey.all.high);
    printf("%s %d %d %d", andrey.all.name, andrey.age, andrey.all.tall, andrey.all.high);
    return 0;
}