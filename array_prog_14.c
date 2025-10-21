// find the second smallest element in an array
#include <stdio.h>

int main() {
    int n, i;
    int min, secondMin;

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

    min = secondMin = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            secondMin = min;
            min = arr[i];
        } else if(arr[i] < secondMin && arr[i] != min) {
            secondMin = arr[i];
        }
    }

    printf("Second smallest element = %d\n", secondMin);
    return 0;
}
