#include<stdio.h>
float frce(float c);

int main(){
    float c;
printf("enter mass in K.G celcius\n");
scanf("%f",&c);
printf("Force:\n %fN\n",frce(c));
    return 0;
}
float frce(float c)
{
    float f=c*9.8;
    return f; 
}