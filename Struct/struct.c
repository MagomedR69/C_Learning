#include <stdio.h>

typedef struct
{
    float width;
    float height;
} area;

float Area(area A)
{
    return A.height * A.width;
}

int main(void)
{
    area first, second;

    printf("высота и ширина первой фигуры: ");
    scanf("%f %f", &first.height, &first.width);

    printf("высота и ширина второй фигуры: ");
    scanf("%f %f", &second.height, &second.width);

    printf("\nплощадь первой фигуры: %.2f\n", Area(first));
    printf("площадь второй фигуры: %.2f\n", Area(second));

    printf("\nразность фигур: %.2f\n", Area(first) - Area(second));
    return 0;
}