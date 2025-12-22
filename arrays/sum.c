// Calculate the sum of all elements of a array
#include <stdio.h>
int main()
{
    int arr1[5] = {5, 4, 2, 5, 1};
    int sum = 0;
    
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr1[i];
    }
    printf("%d ", sum);

    return 0;
}