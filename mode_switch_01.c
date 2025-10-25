// Perform addition, subtraction, multiplication, or division based on user choice
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Perform addition, subtraction, multiplication, or division based on user choice...\n"); break;
        default: printf("Default case for Perform addition, subtraction, multiplication, or division based on user choice\n");
    }
    return 0;
}
