#include<stdio.h>
float farenheit(int c);

int main(){
    int c;
printf("enter temp in celcius\n");
scanf("%d",&c);
printf("Temp in Farenheit:\n%f",farenheit(c));
    return 0;
}
float farenheit(int  c)
{
    float f=c*1.8+32;
    return f; 
}