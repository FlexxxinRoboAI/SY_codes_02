// Switch-based logic operation #36
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Switch-based logic operation #36...\n"); break;
        default: printf("Default case for Switch-based logic operation #36\n");
    }
    return 0;
}
