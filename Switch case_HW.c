#include <stdio.h>

// Function to print the day using switch
void printDay(int day) {
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid input. Please try again.\n");
    }
}

int main() {
    int day;

    do {
        printf("Enter a day between 1 to 7: ");
        scanf("%d", &day);
        printDay(day);  // function call using switch-case
    } while(day < 1 || day > 7);

    return 0;
}

