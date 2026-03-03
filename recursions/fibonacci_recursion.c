//Program to calculate nth Fibonacci number using recursion
#include <stdio.h>

int fib(int n) {
    if(n == 1 || n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    printf("Fibonacci: %d\n", fib(6));
    return 0;
}