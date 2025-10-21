// find the second largest element in an array
#include <stdio.h>

int main() {
    int n, i;
    int max, secondMax;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 0;
    }

    max = secondMax = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("Second largest element = %d\n", secondMax);
    return 0;
}
