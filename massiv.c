#include <stdio.h>

int main()
{
    int arr[5] = {4, 5, 6, 3, 2};
    arr[3] = 67;
    printf("%d\n", arr[3]);

    float numbers[5] = {3.5, 5.34, 55, 6, 6.8};
    printf("%f\n", numbers[3]);

    float gg[3];
    gg[0] = 2.4f;
    gg[3] = 43.5f;
    printf("%f\n", gg[3]);

    char word[] = "hello bro";
    char word[3] = 'd';

    printf("%ls\n", word);
    printf("%c\n", word[3]);

    int arrs[4][3] = {
        {2, 3, 4},
        {34, 55, 31},
        {743, 58, 394},
        {4, 543, 456}};

    arrs[3][2] = 67;

    printf("%d\n", arrs[3][2]);

    return 0;
}
// работа с массивами и их типами :/