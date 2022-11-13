#include<stdio.h>

int main(){
    int marks;
printf("enter marks of student:\n");
scanf("%d",&marks);
if(marks<=100 && marks>90)
{
    printf("Your grade is 'A'");
}
else if(marks<=90 && marks>80)
{
    printf("Your grade is 'B'");
}
else if(marks<=80 && marks>70)
{
    printf("Your grade is 'C'");
}
else if(marks<=70 && marks>60)
{
    printf("Your grade is 'D'");
}
else{
    printf("You're are failed or score is invalid");
}
    return 0;
}