#include <stdio.h>
int main()
{
    int p, t, r;
    float si;
    printf("Enter your Princliple, Rate, Time = ");
    scanf("%d %d %d", &p, &r, &t );
    si = (p * r * t) / 100.0;
    printf("Your Simple Interest is = %.2f\n", si);
    return 0;
}