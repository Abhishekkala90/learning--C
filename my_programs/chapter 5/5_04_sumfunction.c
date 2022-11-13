#include<stdio.h>
int sum(int a,int b);
int main()
{int s;
   s= sum(100,35);
    
   printf("%d",s); 

    return 0;
}
 int sum(int a,int b)
{
int result;
result=a+b;
return result;

}