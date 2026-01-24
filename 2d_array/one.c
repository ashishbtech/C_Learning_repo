#include<stdio.h>
int main()
{
    int size;
    printf("\nEnter a size of square of matrix: ");
    scanf("%d",&size);
    int squarematrix[size][size];
    // int arr[2][2]= {{1,2},{3,4}};
    // int arr[2][2]= {{1,2},{3,4}};
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    printf("\nNow enter the elements for Square matrix of size %d",size);
    for(int i=0; i<size;i++){
        for(int j=0; j<size; j++){
            scanf("%d",&squarematrix[i][j]);
        }
        
    }
    printf("Your given Square matrix is :\n");


    for(int i=0; i<size;i++){
        for(int j=0; j<size; j++){
            printf("%d\t",squarematrix[i][j]);
        }
        printf("\n");
    }

   
    
    return 0;
}