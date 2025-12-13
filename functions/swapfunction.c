#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("After SWAPPING:\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}
