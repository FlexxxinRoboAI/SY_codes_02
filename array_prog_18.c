// find sum of elements at even and odd positions
#include <stdio.h>

int main() {
    int n, i;
    int evenPosSum = 0, oddPosSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(i % 2 == 0)
            evenPosSum += arr[i]; // 0,2,4... positions (1st,3rd,5th...)
        else
            oddPosSum += arr[i];  // 1,3,5... positions (2nd,4th,6th...)
    }

    printf("Sum of elements at even positions = %d\n", evenPosSum);
    printf("Sum of elements at odd positions = %d\n", oddPosSum);

    return 0;
}
