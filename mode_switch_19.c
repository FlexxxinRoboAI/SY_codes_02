// Simple ATM menu using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Simple ATM menu using switch...\n"); break;
        default: printf("Default case for Simple ATM menu using switch\n");
    }
    return 0;
}
