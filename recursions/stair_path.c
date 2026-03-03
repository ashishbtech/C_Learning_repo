//Program to count number of ways to climb stairs (1 or 2 steps at a time)
#include <stdio.h>

int ways(int n) {
    if(n == 0 || n == 1)
        return 1;

    return ways(n - 1) + ways(n - 2);
}

int main() {
    printf("Ways: %d\n", ways(4));
    return 0;
}