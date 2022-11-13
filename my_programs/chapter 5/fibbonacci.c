#include<stdio.h>

int main(){
int a=0,b=1,n,c;    
printf("enter n\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{printf("%d\t",a);
c=a+b;
a=b;
b=c;

}

    return 0;
}