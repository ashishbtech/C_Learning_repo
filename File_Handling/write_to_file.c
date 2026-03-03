//Program to write data into a file using fprintf()
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");   // Open file in write mode

    if(fp == NULL) {
        printf("File not created!\n");
        return 1;
    }

    fprintf(fp, "Hello, this is file handling in C.\n");
    fprintf(fp, "Learning C is fun!\n");

    fclose(fp);   // Close file
    printf("Data written successfully.\n");

    return 0;
}

// Notes:

// "w" → write mode

// If file doesn't exist → created

// If exists → overwritten

// Always check fp == NULL