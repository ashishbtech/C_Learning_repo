//Program to read data from a file using fscanf()

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");   // Open in read mode

    if(fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}

// Notes:

// "r" → read mode

// EOF → End Of File

// Use fgetc() for character reading