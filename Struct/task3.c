#include <stdio.h>

typedef struct
{
    char name[50];
    int score;
} student;

int main()
{
    student s1 = {"Михаил", 47};
    student s2 = {"Дмитрий", 80};

    if (s1.score > s2.score)
    {
        printf("больше всего баллов набрал: %s\n", s1.name);
    }
    else if (s1.score < s2.score)
    {
        printf("больше всего баллов набрал: %s\n", s2.name);
    }
    else
        printf("ученики набрали одинаковое кол-во баллов!\n");
    return 0;
}