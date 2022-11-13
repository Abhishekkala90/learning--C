#include <stdio.h>
int main()
{
    float r, t, p;
    printf("This is a program for simple interest\n\n");
    printf("enter principal:\n");
    scanf("%f", &p);
    printf("enter rate:\n");
    scanf("%f", &r);
    printf("enter time period:\n");
    scanf("%f", &t);
    float i = p * r * t / 100;
    printf("This is  S.I:\n %f \n", i);
    printf("This is  amount:\n %f", p + i);

    return 0;
}