//Program to sort array using Selection Sort

#include <stdio.h>

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;

    for(int i = 0; i < n-1; i++) {
        int minIndex = i;

        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}


// Notes:

// Time → O(n²)

// Space → O(1)

// Not Stable ❌