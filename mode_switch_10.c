// Find maximum among three numbers using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Find maximum among three numbers using switch...\n"); break;
        default: printf("Default case for Find maximum among three numbers using switch\n");
    }
    return 0;
}
