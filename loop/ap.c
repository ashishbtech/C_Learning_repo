// display thisAP 1,3,5,7,9...  upto n terms
// in this Ap d(common terms)= 3-1= 2
//  nth term is 2n-1 in this question
// a,a+d,a+2d,a+3d...........a+(n-1)d
#include <stdio.h>
int main()
{
    int n;
    printf("INput : ");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}