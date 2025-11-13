// print table of n input n from keyboard
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number \n");
    scanf("%d", &n);
    for (i = n; i <= n * 10; i = i + n)
    {
        printf("%d ", i);
    }
    return 0;
}