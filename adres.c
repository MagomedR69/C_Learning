#include <stdio.h>

// начало функции foo()
int foo()
{
    float a = 4.0;
    float *h = &a;
    printf("%p %f\n\n", (void *)h, *h);

    return 0;
}
// начало функции bar()
int bar()
{
    float d = 2.44;
    float *p = &d;
    printf("|вывод функции bar()|:\n");

    printf("%p %f\n", (void *)p, *p);

    return 0;
}
// начало функции main()
int main()
{
    int a = 25;
    int b = 20;
    int c = 40;
    int d = 50;

    int *g = &c;
    int *r = &b;
    int *t = &a;
    int *y = &d;

    printf("|вывод функции main()|:\n");

    printf("%p %d\n", (void *)t, *t);
    printf("%p %d\n", (void *)r, *r);
    printf("%p %d\n", (void *)g, *g);
    printf("%p %d\n\n", (void *)y, *y);
    printf("|вывод функции foo()|:\n");

    foo();
    bar();

    return 0;
}

// работа с адресами и их типами :/