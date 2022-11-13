#include<stdio.h>
float avg(int a,int b, int c);
int main(){
 int a,b,c;   
printf("provide value of a,b,&c\n");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
printf("Average of a,b,&c:\n%f\n",avg(a,b,c));
    return 0;
}
float avg(int a,int b,int c)
{
float d;
float e;
e=a+b+c;
d=e/3;
return d;
}