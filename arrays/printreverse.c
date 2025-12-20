#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 integer values :\n");
    for (int i = 0; i < 5; i++)
    {

        printf("\nEnter a %d element number :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReverse array\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}