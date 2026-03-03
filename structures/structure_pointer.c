#include <stdio.h>

struct person {
    int age;
    float weight;
};

int main() {
    struct person p1 = {23, 68.7};
    struct person *ptr;

    ptr = &p1;

    printf("Age: %d\n", ptr->age);
    printf("Weight: %.1f\n", ptr->weight);

    return 0;
}