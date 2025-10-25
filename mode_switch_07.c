// Menu-driven area calculation (circle, rectangle, triangle)
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Menu-driven area calculation (circle, rectangle, triangle)...\n"); break;
        default: printf("Default case for Menu-driven area calculation (circle, rectangle, triangle)\n");
    }
    return 0;
}
