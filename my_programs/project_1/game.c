#include<stdio.h>//headefiles contains function like printf(),scanf() etc
#include<stdlib.h>//headerfile contains funtion rand()
#include<time.h>//header file contains function time()



int main(){
    int number,guess,nguesses=0;
    srand(time(0));//genrates a random no. time(0) is used so that evry time no. is different
    number =rand()%100+1;//so that no. is always between 1-100
printf("The number is \t%d\n",number);
// keep running the loop number until the no. is guessed
printf("Guess the number between 1 to 100\n");
do{
    
    scanf("%d",&guess);
    nguesses++;
    if(guess>number)
        {
            printf("lower number please\n");
            }
            else if(guess<number)
            {
                printf("higher number please\n");
            }
            
            else{
                printf("You guessed it in %d attempts\n",nguesses);

            }
}while(guess!=number);
    return 0;
}