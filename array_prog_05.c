
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // add each element to sum
    }

    average = sum / n;

    printf("Average of array elements = %.2f\n", average);

    return 0;
}

