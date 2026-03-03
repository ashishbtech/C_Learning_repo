#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[20];
    char dept[20];
};

void check(struct student s1, struct student s2) {
    if(strcmp(s1.dept, s2.dept) == 0)
        printf("Same Department\n");
    else
        printf("Different Department\n");
}

int main() {
    struct student s1 = {1, "Aman", "CSE"};
    struct student s2 = {2, "Rahul", "CSE"};

    check(s1, s2);

    return 0;
}