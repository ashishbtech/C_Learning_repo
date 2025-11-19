#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b, sum;
    printf("Enter a 1st numbers :");
    scanf("%d", &a);

    printf("Enter a 2nd numbers :");
    scanf("%d", &b);
    sum = add(a, b);
    printf("Sum is %d", sum);

    return 0;
}