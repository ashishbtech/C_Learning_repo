//Program to count number of characters in a file
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Total characters: %d\n", count);

    return 0;
}