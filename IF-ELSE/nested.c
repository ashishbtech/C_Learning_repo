// take apositive integer input and tell if it is divisible by 5 or 3 but not divisible by 15
#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);
    if( i%5 ==0 || i%3 == 0){
        if(i%15!=0){
            printf("The number is divisible by 5 or 3");
        }
        else{
            printf("The number is divisible by 15");
        }

    }
    else{
        printf("The number is not divisible by 3 or 5");
    }
}