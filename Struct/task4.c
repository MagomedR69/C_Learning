#include <stdio.h>

typedef struct
{
    int weight;
    int tall;
} point;

typedef struct
{
    char name[50];
    point all;
} men;

int main()
{
    men p1 = {"alex", {50, 140}};

    printf("%s %d %d", p1.name, p1.all.tall, p1.all.weight);
}