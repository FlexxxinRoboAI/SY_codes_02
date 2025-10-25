//  Unit converter (km-m, cm-mm, etc.) using switch
#include <stdio.h>

int main() {
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Executing Unit converter (km-m, cm-mm, etc.) using switch...\n"); break;
        default: printf("Default case for Unit converter (km-m, cm-mm, etc.) using switch\n");
    }
    return 0;
}
