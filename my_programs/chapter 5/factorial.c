#include<stdio.h>

int main(){
    int factorial=1,n;
printf("Enter the number for:\n ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    factorial*=i;
}
printf("factorial of  %d is:%d\n ",n,factorial);
    return 0;
}