//Program to print numbers from n to 1 using recursion
#include <stdio.h>

void printDecreasing(int n) {
    if(n == 0)
        return;

    printf("%d ", n);
    printDecreasing(n - 1);
}

int main() {
    printDecreasing(5);
    return 0;
}