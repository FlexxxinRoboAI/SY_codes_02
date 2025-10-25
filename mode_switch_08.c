// Convert temperature between Celsius and Fahrenheit using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Convert temperature between Celsius and Fahrenheit using switch...\n"); break;
        default: printf("Default case for Convert temperature between Celsius and Fahrenheit using switch\n");
    }
    return 0;
}
