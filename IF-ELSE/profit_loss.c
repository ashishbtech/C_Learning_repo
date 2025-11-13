#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Print your Selling price and Cost Price\n");
    scanf("%d %d", &sp, &cp);
    if (sp>cp)
    {
        printf("Profit\n");
    }
    else
    {
        printf("Loss\n");
    }

    return 0;

}