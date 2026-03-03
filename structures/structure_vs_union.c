#include <stdio.h>

struct pokemon {
    int hp;
    int attack;
};

union pokemon2 {
    int hp;
    int attack;
};

int main() {
    printf("Size of struct: %lu\n", sizeof(struct pokemon));
    printf("Size of union: %lu\n", sizeof(union pokemon2));

    return 0;
}