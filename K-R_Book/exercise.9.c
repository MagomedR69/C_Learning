#include <stdio.h>

int main()
{
    int c;
    int last_c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' || last_c != ' ' && last_c != '\t')
        {
            putchar(c);
        }
        last_c = c;
    }
}