#include <stdio.h>

typedef struct
{
    int x;
    int y;
} point;

int PointPlace(point pp)
{
    return pp.x * pp.y;
}

int main()
{
    point place1 = {5, 7};
    point place2 = {6, 4};

    printf("%d\n", PointPlace(place1) - PointPlace(place2));
    return 0;
}
