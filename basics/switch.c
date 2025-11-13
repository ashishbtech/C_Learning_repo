/*switch (expression) {
    case constant_value_1:
        // code to be executed if expression equals constant_value_1
        break; 
    case constant_value_2:
        // code to be executed if expression equals constant_value_2
        break;
    // ... more cases
    default:
        // code to be executed if expression does not match any case
        break; // Optional for the default case if it's the last block
}

*/

#include <stdio.h>

int main() {
    int ch;

    printf("Enter a number (1-7) to know the day of the week: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Today is Monday\n");
            break;
        case 2:
            printf("Today is Tuesday\n");
            break;
        case 3:
            printf("Today is Wednesday\n");
            break;
        case 4:
            printf("Today is Thursday\n");
            break;
        case 5:
            printf("Today is Friday\n");
            break;
        case 6:
            printf("Today is Saturday\n");
            break;
        case 7:
            printf("Today is Sunday\n");
            break;
        default:
            printf("Invalid choice! \n");
            break;
    }

    return 0;
}
