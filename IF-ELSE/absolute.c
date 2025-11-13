// take a integer input and print the absolute value of integer
#include <stdio.h>
int main()
{
    int x, y = -1;
    printf("enter any integer\n");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("%d\n", x);
    }
    else
    {
        printf("%d\n", x * y);
    }
    return 0;
}
/*
#include<stdio.h> 
int main()
{
int x;
printf("Enter a number : ");
scanf("%d", &x);
if (x<0){
x = x * (-1);
}
printf("The absolute value is %d", x);
return 0;
}

*/
