//Program to count number of ways in a maze (right and down moves only)
#include <stdio.h>

int maze(int n, int m) {
    if(n == 1 || m == 1)
        return 1;

    return maze(n - 1, m) + maze(n, m - 1);
}

int main() {
    printf("Ways: %d\n", maze(3, 3));
    return 0;
}