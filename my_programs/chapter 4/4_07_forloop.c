#include <stdio.h>

int main()

{
    int b;
    printf("enter the number till you want natural numbers\n");
   
      scanf("%d",b);
      printf("\nshowing natural no.s till%d",b);

    for(int i=0;i<b;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}