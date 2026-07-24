#include <stdio.h>

int main()
{
    int tabs = 0;
    int spaces = 0;
    int ends = 0;

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            spaces++;
        }

        else if (c == '\t')
        {
            tabs++;
        }

        else if (c == '\n')
        {
            ends++;
        }
    }
    printf("количество табуляций:%d\n", tabs);
    printf("количество пробелов:%d\n", spaces);
    printf("количество символов конца строки:%d\n", ends);

    return 0;
}