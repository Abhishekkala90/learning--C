#include <stdio.h>

int main()
{
    int n, prime=1;
    printf("provide number\n");
    scanf("%d", &n);
    for (int i = 2;i<n; i++)
    {
        if (n%i == 0)
        {
            prime = 0;
      
        }
    
    }
    if (prime == 0 || n==1)
    {
        printf("%d is not  a prime number", n);
    }
    else 
    {
        printf("%d is  a prime number", n);
    }

    return 0;
}