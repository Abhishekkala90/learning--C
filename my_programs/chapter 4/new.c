#include <stdio.h>

int main()
{
    int i=2,n=10, prime=1;
    
  
    do
    {
       
        if (n%i == 0)
        {
            prime = 0;
      
        }
         i++;
         
    
    }while(n>i);
    printf("prime is \n%d\n",prime);
    if (prime == 0 )
    {
        printf("%d is not  a prime number", n);
    }
    else 
    {
        printf("%d is  a prime number", n);
    }

    return 0;
}