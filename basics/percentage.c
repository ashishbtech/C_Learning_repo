#include <stdio.h>
int main()
{
    float per;
    float m1, m2, m3, m4, m5;
    printf("Enter your 5 subject marks one by one out of 100\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    per = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("\nPercentage is =%.2f", per);

    return 0;
}
