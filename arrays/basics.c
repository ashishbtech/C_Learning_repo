// #include<stdio.h>
// int main()
// {
//     int arr1[5] = {7,8,9,6,5};
//     arr1[4]=99;
//     printf("%d",arr1[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5];
//     printf("Enter 1st element : ");
//     scanf("%d",&arr[0]);
//     printf("Enter 2nd element : ");
//     scanf("%d",&arr[1]);
//     printf("Enter 3rd element : ");
//     scanf("%d",&arr[2]);
//     printf("Enter 4th element : ");
//     scanf("%d",&arr[3]);
//     printf("Enter 5th element : ");
//     scanf("%d",&arr[4]);
//     printf("1D ARRAY IS : %d,%d,%d,%d,%d",arr[0],arr[1],arr[2],arr[3],arr[4]);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 integer values :\n");
    for (int i = 0; i < 5; i++)
    {

        printf("\nEnter a %d element number :", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}