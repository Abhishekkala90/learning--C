#include <stdio.h>
int main()

{
    float a,b;
    
    printf("This is a program for addition of two numbers\n\n\n");
    printf("please provide value of a\n\n");
    scanf("%f",&a);
    printf("please provide value of b\n\n");
    scanf("%f",&b);
    float c = a + b;
    printf("The sum of 'a' & 'b' is %f\n\n ", c);
    return 0;
}
