// Check character type (alphabet, digit, or special character)
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Check character type (alphabet, digit, or special character)...\n"); break;
        default: printf("Default case for Check character type (alphabet, digit, or special character)\n");
    }
    return 0;
}
