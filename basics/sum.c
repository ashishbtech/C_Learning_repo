#include<stdio.h>
int main()
{
    float  x;
    float y;
    float sum;
    printf("Enter you first number in any format decimal or integer = \n");
    scanf("%f", &x);
    printf("Enter you second number in any format decimal or integer = \n");
    scanf("%f", &y);
    sum = x + y;
    printf("Your sum is = %.2f", sum);

    return 0;

}