// find the position of a specific element in an array
#include <stdio.h>

int main() {
    int n, i, key, pos = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its position: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i + 1; // positions start from 1
            break;
        }
    }

    if(pos != -1)
        printf("%d found at position %d\n", key, pos);
    else
        printf("%d not found in the array\n", key);

    return 0;
}
