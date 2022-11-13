#include <stdio.h>

int main()
{
    int age;
    printf("enter your age:\n");
    scanf("%d", &age);
     if (age >= 80)
    {
        printf("You are overage\n");
    }
    else if (age<80 && age>=18)
    {
        printf("You can drive\n");
    }
    
    else if (age<18)
    {
        printf("You are underage");
    }
   
    
    return 0;
}