#include<stdio.h>
int main()
{
    int a ;
    printf("Enter your Dividend = \n");
    scanf("%d", &a);
    int b;
    printf("Enter your Divisor = \n");
    scanf("%d", &b);
   // int q = a/b;
   // int r = a-b*q; // DIVISOR X QUOTIENT + REMAINDER = DIVIDEND
   // printf("When you divide %d by %d yo got remainder = %d", a,b,r);
   int r = a % b;
   printf("When you divide %d by %d yo got remainder = %d", a,b,r);
    return 0;
}