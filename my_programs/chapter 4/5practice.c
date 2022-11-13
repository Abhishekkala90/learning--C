// Q.5 program for factorial

#include<stdio.h>

int main(){
    int factorial=1,n;
    printf("enter the no for which you want to find factorial :\n");
    scanf("%d",&n);
    
for(int i=1;i<=n;i++)
{
    factorial *=i;
    }
printf("Factorial of the %d :\n%d",n,factorial);
    return 0;
}
