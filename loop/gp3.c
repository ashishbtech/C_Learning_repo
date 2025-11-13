// display this GP 100 , 50 , 25.. upto n terms
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the value :");
    scanf("%d", &n);
    float a = 100;
    for (i = 1; i <= n; i++)
    {
        printf("%.2f ", a);
        a = a * 0.5;
    }

    return 0;
}