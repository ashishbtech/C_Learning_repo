// Print Hello world n times , take 'n' as input from user
#include <stdio.h>
int main()
{
    int i, n;
    printf("Input any positive integer value to get printed Hello World!\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Hello World!\n");
    }
    return 0;
}
// i++ // i=i+1
//  i+=2 // i = i+2