// take a 3 numbers input and tell if they can be the sides of a triangle
// if triangle have 3 sides a,b,c
// a+b>c
// b+c>a
// a+c>b
// sum of two sides should be greater than third side
#include <stdio.h>
int main()
{
    int sideA, sideB, sideC;
    printf("Input the three sides in positive integer only\n");
    printf("Side A : \n");
    scanf("%d", &sideA);
    printf("Side B : \n");
    scanf("%d", &sideB);
    printf("Side C : \n");
    scanf("%d", &sideC);
    if (sideA + sideB > sideC && sideB + sideC > sideA && sideC + sideA > sideB)
    {
        printf("Sides are correct for triangle\n");
    }
    else
    {
        printf("Invalid sides for Triangle\n");
    }

    return 0;
}