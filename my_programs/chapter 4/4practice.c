// Q4.sum of table of n from 1 to 10
#include<stdio.h>

int main(){
    int sum=0,n;
    printf("enter n:\n");
    scanf("%d",&n);
    
for(int i=0;i<=10;i++)
{
    sum +=i*n;
    }
printf("sum of table of n from 1 to 10:\n%d",sum);
    return 0;
}
