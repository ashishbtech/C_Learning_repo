#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 2};
    int n = 5;

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("Duplicate element: %d\n", arr[i]);
                return 0;
            }
        }
    }

    return 0;
}


// Notes:

// Time Complexity → O(n²)

// Space Complexity → O(1)