#include <stdio.h>

struct book {
    char name[50];
    float price;
    int pages;
};

int main() {
    struct book b1 = {"C Programming", 450.50, 300};

    printf("Book Name: %s\n", b1.name);
    printf("Price: %.2f\n", b1.price);
    printf("Pages: %d\n", b1.pages);

    return 0;
}