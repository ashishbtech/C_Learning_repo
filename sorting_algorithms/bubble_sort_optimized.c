//Program to implement optimized Bubble Sort for nearly sorted arrays

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int swapped;

    for(int i = 0; i < n-1; i++) {
        swapped = 0;

        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        if(swapped == 0)
            break;
    }

    return 0;
}