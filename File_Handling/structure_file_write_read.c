//Program to write and read structure data using fwrite() and fread()
#include <stdio.h>

struct student {
    int roll;
    char name[20];
};

int main() {
    FILE *fp;
    struct student s1 = {1, "Aman"};
    struct student s2;

    fp = fopen("student.dat", "wb");

    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("student.dat", "rb");

    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    printf("Roll: %d\nName: %s\n", s2.roll, s2.name);

    return 0;
}

// Notes:

// "wb" → write binary

// "rb" → read binary

// fwrite() and fread() used for structures