//Program to calculate sum from 1 to n using recursion
#include <stdio.h>

int sum(int n) {
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    printf("Sum is %d\n", sum(5));
    return 0;
}