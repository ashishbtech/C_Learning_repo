#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main() {
    struct date d1 = {1, 1, 2025};
    struct date d3;

    d3 = d1;   // Structure assignment

    printf("%d-%d-%d\n", d3.day, d3.month, d3.year);

    return 0;
}