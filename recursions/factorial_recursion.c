//Program to calculate factorial of a number using recursion
#include <stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1)   // Base case
        return 1;

    return n * factorial(n - 1);   // Recursive call
}

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

//Base case is mandatory

// Time → O(n)

// Space → O(n) (call stack)