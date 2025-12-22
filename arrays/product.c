// Print the product of elements in given array
#include <stdio.h>
int main()
{
    int arr[4];
    printf("Enter the elements for array\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements for array\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ", arr[i]);
    }
    int product = 1;
    for (int i = 0; i < 4; i++)
    {
        product = product * arr[i];
    }
    printf("\nProduct of all elements of given arrays is %d", product);

    return 0;
}