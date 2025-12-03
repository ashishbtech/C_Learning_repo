#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


int main() {
    double degrees = 30.0;
    double radians = degrees * (M_PI / 180.0);

    printf("sin(30°) = %f\n", sin(radians));
    printf("cos(30°) = %f\n", cos(radians));
    printf("tan(30°) = %f\n", tan(radians));

    return 0;
}
