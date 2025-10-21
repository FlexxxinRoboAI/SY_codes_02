// copy one array to another
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements for the first array: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i]; // copy each element
    }

    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");

    printf("Copied array:   ");
    for(i = 0; i < n; i++)
        printf("%d ", arr2[i]);
    printf("\n");

    return 0;
}
