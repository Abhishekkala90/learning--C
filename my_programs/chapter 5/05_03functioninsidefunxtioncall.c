#include<stdio.h>
void ga();//function can be called directly or indirectly
void gm();
void ge();
int main(){
    
printf("Initialising functions 'gm','ge'gf'\n");
    
    gm(); //here funtions ga() & ge()are called directly in function gm()
    
    return 0;
}
void gm()//function ke andar fucntion is posssible
{
    ga();
    ge();
    printf("Good Morning Abhishek\n");
}
void ga()
{
    printf("Good Afternoon Abhishek\n");
}
void ge()
{
    printf("Good Evening Abhishek\n");
}