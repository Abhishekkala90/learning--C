#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess=0;
srand(time(0));
number=rand()%100;

printf("guess the number between 1-100 \n");
 
do
{
    
   scanf("%d",&guess)  ;
    nguess++;
    if(guess<number)
        { printf("\nGuess a higher number\t");

    }
    else if(guess>number)
        { printf("\nGuess a lower number\t");

    }
    else
        { printf("\nYou guessed the no. in %d attempt\n",nguess);

    }
}while(guess!=number);
    return 0;
}