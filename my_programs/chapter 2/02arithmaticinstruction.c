#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 8;
    int z;
    z = a * b;
    // a*b=z;this is illegal
    printf("the value of a+b is :\n %d\n", a + b);
    printf("the value of a-b is :\n %d\n", a - b);
    printf("the value of a*b is :\n %d\n", a * b);
    printf("the value of a/b is :\n %d\n", a / b);
    printf("the value of z is :\n %d\n", z);
    printf("when 5 is divided by 2 leaves remainder:\n%d\n", 5 % 2);
    printf("when -5 is divided by 2 leaves remainder:\n%d\n", -5 % 2);
    printf("when -5 is divided by -2 leaves remainder:\n%d\n", -5 % -2);
    printf("when 5 is divided by -2 leaves remainder:\n%d\n", 5 % -2); // sigh bs numerator ka hi ata hai
                                                                       // no operrator is assumed to be present e.g
    //  printf("when  5*2 gives:\n%d\n",5.2) wrong answer return krega;
    //  printf("when  5*2 gives:\n%d\n",(5)(2))error;
    printf("when  5*2 gives:\n%d\n", (5) * (2));
    printf("5^2 gives:\n%d\n", 5 ^ 2); // no operator to perform expontition in c will not produce error but will produce bitwise xor opertor(wrong answer)
    // for power use function pow() to use this you need to #include<math.h>
    printf("11 to the power 2 gives:\n%f\n", pow(11, 2));
    printf("the value of 6+5.8 is :\n %f\n", 6 + 5.8);
    printf("the value of 6+5 is :\n %d\n", 6 + 5);


    return 0;
}