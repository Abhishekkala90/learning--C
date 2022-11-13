// Q3.sum  of n no.s

#include <stdio.h>

int main()
{
    int i = 0;
    int n, sum=0;
    printf("enter n:\n");
    scanf("%d",&n);

    while (i < n)
    {
        i++;
        sum += i ;
    }
    printf("sum of first n natural numbers:\n%d\n",sum);
         return 0;
}

