#include <stdio.h>
int main()
{
    int l, b, per, ar;
    printf("Enter Length of a Rectangle = \n");
    scanf("%d", &l);
    printf("Enter Breadth of a Rectangle = \n");
    scanf("%d", &b);
    per = 2 * (l + b);
    ar = l * b;
    printf("\n\nArea is %d,\nPermeter is %d\n",ar,per);
    if (ar > per)
    {
        printf("Area is greater than Perimeter\n");
    }

    if (ar < per)
    {
        printf("Area is lesser than Perimeter\n");
    }
    return 0;
}