#include<stdio.h>
int main()
{
    int x;
    printf("Input the number to check it is divisible by 5 or not\n");
    scanf("%d", x);
    if (x % 5 == 0)
    {
        printf("The Number is dividible by 5\n");
    }
    else
    {
        printf("The Number is NOT dividible by 5\n");
    }
    
}