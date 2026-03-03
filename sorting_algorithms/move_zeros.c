#include <stdio.h>

int main() {
    int arr[] = {0,1,0,3,12};
    int n = 5;
    int index = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0)
            arr[index++] = arr[i];
    }

    while(index < n)
        arr[index++] = 0;

    printf("Modified array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

// Notes:

// Time → O(n)

// Space → O(1)