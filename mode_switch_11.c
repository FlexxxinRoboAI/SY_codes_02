// Check sign of a number using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Check sign of a number using switch...\n"); break;
        default: printf("Default case for Check sign of a number using switch\n");
    }
    return 0;
}
