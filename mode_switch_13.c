// Display grade based on percentage using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Display grade based on percentage using switch...\n"); break;
        default: printf("Default case for Display grade based on percentage using switch\n");
    }
    return 0;
}
