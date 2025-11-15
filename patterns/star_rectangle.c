// *****
// *****
// *****
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter a number of rows =");
    scanf("%d", &n);
    
    printf("Enter a number of columns =");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)//outer loop signifies no. of lines or no. of rows
    {
        for (int i = 1; i <= m; i++)//inner loop signifies no. of stars in each line or no. of columns
        {
            printf("* ");
        }
        printf("\n");//har line ke baad next line
    }
    
    return 0;
}