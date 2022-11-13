//fibonacci series
#include<stdio.h>
int fib(int c);

int main(){
    int c;
printf("enter 'n' for fibonacci series\n");
scanf("%d",&c);
printf("nth term of fibonacci:\t ");
for(int i=0;i<c;i++)
printf("%d\t",fib(i));
    return 0;
}
int fib(int z)
{
        if(z==0)
        return 0;
        else if(z==1)
        return 1;
  else
  return fib(z-1)+fib(z-2);

}