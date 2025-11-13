// print numbers 1 to 100 in different lines
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i = i + 1)
    {
        printf("%d\n", i);
    }
    printf("\nNumbers from 1 to 100 are above");
    return 0;
}