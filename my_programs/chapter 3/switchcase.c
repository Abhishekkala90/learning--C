//when you have to make a choice  between no. of alternatives for a given variable.
#include<stdio.h>

int main(){
    int rating;

printf("enter your (1-5)rating\n");
scanf("%d",&rating);
switch(rating){
case 1:
printf("\nYour rating is 1\n");
break;
case 2:
printf("\nYour rating is 2\n");
break;
case 3:
printf("\nYour rating is 3\n");
break;
case 4:
printf("\nYour rating is 4\n");
break;
case 5:
printf("\nYour rating is 5\n");
break;
default:
printf("\nInvalid rating\n");
}
    return 0;
}