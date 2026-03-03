#include <stdio.h>

struct engine {
    int bolts;
};

struct car {
    struct engine e;
};

int main() {
    struct car maruti;
    maruti.e.bolts = 25;

    printf("Bolts: %d\n", maruti.e.bolts);

    return 0;
}