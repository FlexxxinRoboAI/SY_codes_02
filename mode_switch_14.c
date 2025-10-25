// Electricity bill calculator using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Electricity bill calculator using switch...\n"); break;
        default: printf("Default case for Electricity bill calculator using switch\n");
    }
    return 0;
}
