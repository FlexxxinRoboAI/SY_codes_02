// find the second largest element in an array
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = INT_MIN, secondMax = INT_MIN;

    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if(secondMax == INT_MIN)
        printf("No second largest element exists.\n");
    else
        printf("Second largest element = %d\n", secondMax);

    return 0;
}
