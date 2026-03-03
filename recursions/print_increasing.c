//Program to print numbers from 1 to n using recursion
#include <stdio.h>

void printIncreasing(int n) {
    if(n == 0)
        return;

    printIncreasing(n - 1);
    printf("%d ", n);
}

int main() {
    printIncreasing(5);
    return 0;
}