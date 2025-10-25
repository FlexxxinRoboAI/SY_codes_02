// Simple or compound interest calculator
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Simple or compound interest calculator...\n"); break;
        default: printf("Default case for Simple or compound interest calculator\n");
    }
    return 0;
}
