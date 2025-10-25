//Check if number is positive, negative or zero
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Check if number is positive, negative or zero...\n"); break;
        default: printf("Default case for Check if number is positive, negative or zero\n");
    }
    return 0;
}
