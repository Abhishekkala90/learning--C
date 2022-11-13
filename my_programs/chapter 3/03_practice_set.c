// Q1.

// #include<stdio.h>

// int main(){
//     int a=10;
//     if(a==11)
//     {
// printf("I am 11");

//     }
//     else{
// printf("I am not 11");

//     }
//     return 0;
// }


// Q2.marks pass or fail

// #include <stdio.h>

// int main()
// {
//     float maths, english, science;
//     float percentage;
//     printf("enter the marks of maths:\n");
//     scanf("%f", &maths);
//     printf("enter the marks of english:\n");
//     scanf("%f", &english);
//     printf("enter the marks of science:\n");
//     scanf("%f", &science);
//     percentage=(maths + english + science)/300*100;
//     printf("Your percentage is %f :\n",percentage);
    
//      if ((maths > 100) || (science > 100) || (english > 100))
//     {
//         printf("You're score is invalid");
//     }
//     else if (((maths + english + science)/300*100)>= 40 && (maths >= 33 && english >= 33 && science >= 33))
//     {
//         printf("You are pass");
//     }
 
//     else
//     {
//         printf("You are fail");
//     }
//     return 0;
// }

// Q3.income tax

// #include<stdio.h>

// int main(){
//     int income;
//     float tax;
    
// printf("enter your income:\n");
// scanf("%d",&income);
// if(income<=250000)
// {tax=0;
// printf("Income tax on your income is:\n%f\n",tax);
// }
// else if(income>250000 && income<500000)
// {tax=(income/100)*5;
// printf("Income tax on your income is:\n%f\n",tax);
// }
// else if(income>=500000 && income<1000000)
// {tax=(income/100)*20;
// printf("Income tax on your income is:\n%f\n",tax);
// }
// else
// {tax=(income/100)*30;
// printf("Income tax on your income is:\n%f\n",tax);
// }
//     return 0;
// }

// Q4.leapyear or not

// #include<stdio.h>

// int main(){
//     int year;
    
// printf("Enter the year:\n");
// scanf("%d",&year);
// if(year%4==0)
// printf("The year is a leapyear\n");
// else{
//     printf("The year is not a leapyear\n");
// }

//     return 0;
// } 

//Q4.greatest of 4 numbers

// #include<stdio.h>

// int main(){
//     int a,b,c,d,biggest;
// printf("enter 4 numbers:\n");
// scanf("%d",&a);
// scanf("%d",&b);
// scanf("%d",&c);
// scanf("%d",&d);
// if(a>b && a>c && a>d)
// {
//     printf("Biggest number is:\n%d\n",a);
// }
// else if(b>a && b>c && b>d)
// {
//     printf("Biggest number is:\n%d\n",b);
// }
// else if(c>b && c>a && c>d)
// {
//     printf("Biggest number is:\n%d\n",c);
// }
// else if(d>b && d>c && d>a)
// {
//     printf("Biggest number is:\n%d\n",d);
// }
//     return 0;
// }

//Q5.lowercase or not

#include<stdio.h>

int main(){
    //ascia 97-122=a-z
    //ascia 65-90=A-Z
    char c;
printf("Enter the character:\n");
scanf("%c",&c);
if(c>=97 && c<=122)
{
    printf("character is in lowercase:\n");
}
else if(c>=65 && c<=90)
{
    printf("character is in uppercase:\n");

}
else if(c>=48 && c<=57)
{
    printf("character is a number:\n");

} 
else
{
    printf("character is a special character:\n");
}
    return 0;
}