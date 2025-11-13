// Take positive integer input and tell if it is divisible by 5 and 3
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a positive integer: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    if (x % 3 == 0 && x % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5.\n", x);
    }
    else if (x % 3 == 0)
    {
        printf("%d is divisible by 3 only.\n", x);
    }
    else if (x % 5 == 0)
    {
        printf("%d is divisible by 5 only.\n", x);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5.\n", x);
    }

    return 0;
}


