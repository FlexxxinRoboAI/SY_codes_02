// Display day name using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Display day name using switch...\n"); break;
        default: printf("Default case for Display day name using switch\n");
    }
    return 0;
}
