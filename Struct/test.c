#include <stdio.h>

typedef struct
{
    int width;
    int height;
} Rectangle;

int getArea(Rectangle r)
{
    return r.width * r.height;
}

int main()
{
    Rectangle rect = {5, 10};
    printf("Площадь: %d\n", getArea(rect));
    return 0;
}