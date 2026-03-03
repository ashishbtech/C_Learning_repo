#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int main() {
    struct date d1 = {3, 3, 2026};
    struct date d2 = {3, 3, 2026};

    if(d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
        printf("Equal\n");
    else
        printf("Unequal\n");

    return 0;
}