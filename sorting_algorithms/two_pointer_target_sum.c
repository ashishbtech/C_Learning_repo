//Program to find two numbers in sorted array whose sum equals target

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 8, 9};
    int n = 7;
    int target = 8;

    int i = 0;
    int j = n - 1;

    while(i < j) {
        if(arr[i] + arr[j] == target) {
            printf("Pair found: %d and %d\n", arr[i], arr[j]);
            break;
        }
        else if(arr[i] + arr[j] > target)
            j--;
        else
            i++;
    }

    return 0;
}


// Notes:

// Only works on sorted array

// Time → O(n)

// Space → O(1)