#include<stdio.h>

int main()
{
    int i,j,k,m,n,p,q;

    printf("Enter the row and column size for matrix 1:\n");
    scanf("%d %d",&m,&n);
    
    printf("Enter the row and column size for matrix 2:\n");
    scanf("%d %d",&p,&q);

    if(n != p){
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int arr1[m][n], arr2[p][q], prod[m][q];

    printf("\nInput the elements for First matrix:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nInput the elements for Second matrix:\n");
    for(i = 0; i < p; i++){
        for(j = 0; j < q; j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    // Initialize product matrix
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            prod[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            for(k = 0; k < n; k++){
                prod[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Print result
    printf("\nProduct of matrices:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < q; j++){
            printf("%d ", prod[i][j]);
        }
        printf("\n");
    }

    return 0;
}
