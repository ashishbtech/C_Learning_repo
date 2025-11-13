/*
Any year input through the keyboard tell that year is leap or not*/
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year\n");
    scanf("%d", &yr);
    if (yr % 4 == 0)
    {
        printf("the year is leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}