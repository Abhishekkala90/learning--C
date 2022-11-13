void star(int n);
#include<stdio.h>

int main(){
    int n;
printf("Enter 'n' value for odd star pattern:\n ");
scanf("%d",&n);
printf("Your pattern for value %d:\n",n);
   for(int j=1;j<=n;j++)
  { star(j);
  }
    return 0;
}

void star(int n)
{
if(n==1)
{
printf("*\n");
return ;
}
for(int i=0;i<(2*n-1);i++)
{
    printf("*");
}
printf("\n");
}