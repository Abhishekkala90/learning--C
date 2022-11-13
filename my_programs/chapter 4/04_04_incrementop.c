#include<stdio.h>

int main(){
  int   i=5;
printf("The value of i is %d\n",i);
printf("The value after i++ is %d\n",i++);
printf("The value after ++i s %d\n",++i);
printf("The value of i now %d \n",i);
printf("The value after i-- is %d\n",i--);
printf("The value after --i s %d\n",--i);
printf("The value of i now %d \n",i);
// compound assignment operator "+=","-=","*=","/=" and "%="
i+=10; //--> increments i by 10
printf("The value of i now %d \n",i);
    return 0;
}