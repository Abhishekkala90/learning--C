// fibonacci series
#include <stdio.h>
int sum(int c);

int main()
{
    int c;
    printf("enter 'nth' term\n");
    scanf("%d", &c);
    printf("\nsum series till %dth term:\t :\n ", c);
    for (int i = 1; i <= c; i++)
        printf(" %d \t ", sum(i));

    printf("\n\nsum till %dth term:\n%d \t ", c, sum(c));
    return 0;
}
int sum(int c)
{
    if (c == 0)
        return 0;
    else if (c == 1)
        return 1;
    else
        return c + sum(c - 1);
}