#include<stdio.h>
void display();//Function prototype
int main(){
    int a;
    printf("This is initialising display\n");
    display();
    printf("Display fuction finished its work");

    return 0;
}
void display(){
    printf("this is a display\n");
}