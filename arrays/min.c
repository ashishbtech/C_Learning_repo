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
    int min = arr[n-1];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nMin element is %d", min);
    return 0;
}