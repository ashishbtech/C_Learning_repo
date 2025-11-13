// display this AP 100,97,94,... upto all terms which are positive.
#include <stdio.h>
int main()
{
    int i;
    printf("AP is \n");

    for (i = 100; i > 0; i = i - 3)
    {
        printf("%d ", i);
    }
    return 0;
}