#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter size of row for first and second matrix\n");
    scanf("%d", &row);
    printf("Enter size of column for first and second matrix\n");
    scanf("%d", &column);
    printf("\n");
    int arr1[row][column], arr2[row][column], sum[row][column];
    printf("Enter the elements for first matrix for order %dX%d\n", row, column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");

    printf("Enter the elements for second matrix for order %dX%d\n", row, column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("1st Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }


      printf("2nd Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    printf("Sum of matrices :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}