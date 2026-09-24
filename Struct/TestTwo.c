#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

int SamePoint(point p1, point p2)
{
    int a;
    if (p1.x == p2.x && p1.y == p2.y)
    {
        a = 1;
        return a;
    }
    else if (p1.x != p2.x || p1.y != p2.y)
    {
        a = 0;
        return a;
    }
}
int main()
{
    point a = {6, 7};
    point b = {7, 7};

    if (SamePoint(a, b) == 1)
    {
        printf("Точки A и B совпадают!\n");
    }
    else
    {
        printf("Точки A и B разные!\n");
    }

    return 0;
}