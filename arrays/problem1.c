#include <stdio.h>
int main()
{
    int marks[5];
    printf("Enter Cs marks of 5 students :\n");
    for (int i = 0; i < 5; i++)
    {

        printf("\nEnter a %d Student marks :", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
        {
            printf("Roll no is %d\n", i);
        }
        
    }
    
    return 0;
}