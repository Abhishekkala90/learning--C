void star(int n);
#include<stdio.h>

int main(){
    int n;
printf("Enter 'n' value for odd star pattern:\n ");
scanf("%d",&n);
printf("Your pattern for value %d:\n",n);
   star(n);
 
    return 0;
}

void star(int n)
{
if(n==1)
{
printf("*\n");
return ;
}
star(n-1);
for(int i=0;i<(2*n-1);i++)
{
    printf("*");
}
printf("\n");
}