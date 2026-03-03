// | Function   | Purpose                             |
// | ---------- | ----------------------------------- |
// | `strlen()` | Returns length of string            |
// | `strcpy()` | Copies one string to another        |
// | `strcat()` | Concatenates strings                |
// | `strcmp()` | Compares two strings                |
// | `strchr()` | Finds first occurrence of character |
// | `strstr()` | Finds substring                     |
// | `memset()` | Fills memory with a value           |




#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char str4[50] = "Hello World";
    int len, cmp;

    // 1. strlen() - Find length of string
    len = strlen(str1);
    printf("Length of str1: %d\n", len);

    // 2. strcpy() - Copy string
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);

    // 3. strcat() - Concatenate strings
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated string (str1): %s\n", str1);

    // 4. strcmp() - Compare strings
    cmp = strcmp(str1, str4);
    if (cmp == 0)
        printf("str1 and str4 are equal\n");
    else
        printf("str1 and str4 are not equal\n");

    // 5. strchr() - Find first occurrence of character
    char *pos = strchr(str1, 'W');
    if (pos != NULL)
        printf("First occurrence of 'W' in str1: %s\n", pos);

    // 6. strstr() - Find substring
    char *sub = strstr(str1, "World");
    if (sub != NULL)
        printf("Substring 'World' found: %s\n", sub);

    // 7. memset() - Fill memory
    memset(str2, '*', 5);
    str2[5] = '\0';
    printf("After memset str2: %s\n", str2);

    return 0;
}