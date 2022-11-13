//loops are used to repeat similar part of a code snippet efficiently
#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a>1)
        {
            printf("%d\t",a);
            a++;
        }
    
    return 0;
}