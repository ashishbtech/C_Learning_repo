#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter your odd number of rows : ");
    scanf("%d", &n);

    printf("Enter your odd number of columns : ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int a = n / 2 + 1;
            if (i == 1 || i == n || j == 1 || j == m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}