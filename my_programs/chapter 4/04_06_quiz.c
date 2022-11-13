#include<stdio.h>

int main(){
    int i=1;
    int n;
        printf("enter n \n ");
    scanf("%d",&n);
    do{
        printf(" %d\t",i);
        i++;
    }while(i<=n);

    return 0;
}