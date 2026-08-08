#include <stdio.h>
#include <stdlib.h>
#include "FirstNumber.h"
#include "SecondNumber.h"

int main()
{
    int FirstRes = mall();
    int SecondRes = moll();

    printf("в памяти было записано число: %d\n", FirstRes);

    printf("в памяти было записано число: %d\n", SecondRes);

    return 0;
}