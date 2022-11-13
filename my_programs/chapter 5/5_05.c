#include<stdio.h>//by user defined function
int ars(int a);
int main()
{
    
   printf("area of square is:\t%d", ars(25)); 

    return 0;
}
 int ars(int a)
{
int result;
result=a*a;
return result;

}