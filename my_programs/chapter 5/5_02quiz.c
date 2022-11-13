#include<stdio.h>
void ga();//function can be called directly or indirectly here funtions are called directly
void gm();
void gn();
int main(){
    
printf("Initialising functions 'gm','ge'gf'\n");
    
    gm();
    ga();
    gn();
    return 0;
}
void gm()
{
    printf("Good Morning Abhishek\n");
}
void ga()
{
    printf("Good Afternoon Abhishek\n");
}
void gn()
{
    printf("Good Evening Abhishek\n");
}