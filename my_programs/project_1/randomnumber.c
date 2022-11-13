// number guessing game
// Random number generator
#include<stdio.h>//headefiles contains function like printf(),scanf() etc
#include<stdlib.h>//headerfile contains funtion rand()
#include<time.h>//header file contains function time()



int main(){
    int number;
    srand(time(0));//genrates a random no. time(0) is used so that evry time no. is different
    number =rand()%100+1;//so that no. is always between 1-100
printf("The number is \n%d",number);
    return 0;
}