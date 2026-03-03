#include <stdio.h>

// Define structure
struct employee {
    int emp_id;
    char name[50];
    float salary;
};

int main() {
    struct employee e1 = {101, "Rohan", 80000.78};

    // Accessing structure members
    printf("Employee ID: %d\n", e1.emp_id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);

    return 0;
}