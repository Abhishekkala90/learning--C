// Q1.table of n number:

#include<stdio.h>
int main(){
    int n;
printf("enter which number's table you want:\n");
scanf("%d",&n);
   printf("Your multiplication table is:\n ");

    for(int i=1;i<=20;i++)
    {
   printf("%dx%d=%d\n ",n,i,i*n);
       }
    return 0;
}
