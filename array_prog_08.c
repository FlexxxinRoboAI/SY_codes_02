// find the largest and smallest elements in an array
#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0]; // initialize both with first element
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}
