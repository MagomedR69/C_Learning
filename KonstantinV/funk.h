void read_input(int *pa, int *pb)
{
    int UserInput;
    printf("input a and b: ");

    UserInput = scanf("%d%d", pa, pb);
    if (UserInput != 2 || pb == 0)
    {
        printf("Error: input invali, expect any a and b != 0\n");
        abort();
    }
}