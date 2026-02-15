#include <stdio.h>
int main()
{
    int arr[3][3];
    int transpose[3][3];
    printf("Enter the elements for 2d array or matrix\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }


    printf("\nThe Transpose of given matrix \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose[j][i] = arr[i][j];
        }
    }



    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}