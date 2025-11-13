#include <stdio.h>
int main()
{
    float r;
    float area, volume, pi = 3.14;
    printf("Input the radius of Sphere\n");
    scanf("%f", &r);
    volume = (4.0 / 3) * pi * r * r * r;
    printf("The Volume of Sphere is %.2f", volume);
    area = 4.0 * pi * r * r;
    printf("\nThe Area of Sphere is %.2f", area);

    return 0;
}