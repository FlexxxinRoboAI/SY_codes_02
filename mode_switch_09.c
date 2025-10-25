// Simple calculator using nested switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Simple calculator using nested switch...\n"); break;
        default: printf("Default case for Simple calculator using nested switch\n");
    }
    return 0;
}
