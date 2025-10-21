// find the average of array elements
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // add each element to sum
    }

    avg = sum / n; // calculate average
    printf("Average of the array = %.2f\n", avg);

    return 0;
}
