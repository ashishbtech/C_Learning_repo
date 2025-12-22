#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d values of array \n ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMax element is %d", max);
    return 0;
}