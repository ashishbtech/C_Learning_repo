#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3};
    int n = 6;
    int sum = 0;

    for(int i = 0; i < n; i++)
        sum += arr[i];

    int expected = (n-1) * n / 2;

    printf("Duplicate element: %d\n", sum - expected);

    return 0;
}

// Notes:

// Time → O(n)

// Space → O(1)

// Works only when numbers are 1 to n