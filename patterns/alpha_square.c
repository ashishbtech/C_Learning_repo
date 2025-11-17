#include <stdio.h>
int main()
{
    int n;
    printf("Enter the numbers of rows or column : ");
    scanf("%d", &n);
    // A B C D
    // A B C D
    // A B C D
    // A B C D

    // ascii value of A -> 65
    // ascii value of B -> 66
    // ascii value of C -> 67
    // ascii value of a -> 97
    // ascii value of b -> 98
    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            int d = a + 64;    // d = 65
            char ch = (char)d; // ch =(char)65 -->ch ='A'
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}