#include <stdio.h>

int foo()
{
    float a = 4.0;
    float *pa = &a;
    printf("%p %f\n\n", (void *)pa, *pa);

    return 0;
}

int bar()
{
    float d = 2.44;
    float *pd = &d;
    printf("|вывод функции bar()|:\n");

    printf("%p %f\n", (void *)pd, *pd);

    return 0;
}

int main()
{
    int a = 25;
    int b = 20;
    int c = 40;
    int d = 50;

    int *pc = &c;
    int *pb = &b;
    int *pa = &a;
    int *pd = &d;

    printf("|вывод функции main()|:\n");

    printf("%p %d\n", (void *)pa, *pa);
    printf("%p %d\n", (void *)pb, *pb);
    printf("%p %d\n", (void *)pd, *pd);
    printf("%p %d\n\n", (void *)pc, *pc);
    printf("|вывод функции foo()|:\n");

    foo();
    bar();

    return 0;
}