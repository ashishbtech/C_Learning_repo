#include <stdio.h>

struct cricketer {
    char name[20];
    int age;
    int matches;
    float average;
};

int main() {
    struct cricketer c[2];

    for(int i = 0; i < 2; i++) {
        printf("\nEnter details of cricketer %d\n", i+1);
        scanf("%s %d %d %f", c[i].name, &c[i].age, &c[i].matches, &c[i].average);
    }

    printf("\n--- Cricketer Details ---\n");
    for(int i = 0; i < 2; i++) {
        printf("%s %d %d %.2f\n", c[i].name, c[i].age, c[i].matches, c[i].average);
    }

    return 0;
}