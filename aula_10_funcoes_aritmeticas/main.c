#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int num1, num2, num7, num8;
    float num3, num4;

    num1 = 10;
    num2 = 3;

    num3 = 10.0;
    num4 = 3;

    float num5, num6;

    num5 = num1/num2;
    num6 = num3/num4;

    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%f\n", num3);
    printf("%f\n", num4);
    printf("%.2f\n", num5);
    printf("%.2f\n", num6);

    num7 = num1 % num2;
    printf("%d\n", num7);

    num8 = pow(num1,num2);
    printf("%d\n", num8);

}