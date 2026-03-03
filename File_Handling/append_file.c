//Program to append data to an existing file
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "a");   // Append mode

    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "This line is appended.\n");

    fclose(fp);

    printf("Data appended successfully.\n");

    return 0;
}

// Notes:

// "a" → append mode

// Old data remains

// New data added at end