#include <stdio.h>
#include <stdlib.h>
#include "funk.h"
int main()
{
    int a, b, d, v, UserInput;
    read_input(&a, &b);
    v = a / b;
    d = a % b;
    printf("v = %d, d = %d\n", v, d);
    return 0;
}