// display this GP = 1,2,4,8,16,32... upto n terms
#include <stdio.h>
int main()
{
    int n, i, a = 1;
    printf("Enter the value :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}