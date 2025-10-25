// Check even or odd using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Check even or odd using switch...\n"); break;
        default: printf("Default case for Check even or odd using switch\n");
    }
    return 0;
}
