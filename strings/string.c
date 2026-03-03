#include<stdio.h>


//initializing the string
int main()
{
    char arr[] = "Bro code is legend of logic builders\0";//null character will automatically assigned inside the array by default if we dont add it
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
    
}