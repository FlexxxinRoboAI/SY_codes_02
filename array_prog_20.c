// find the largest prime number in an array
#include <stdio.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i, maxPrime = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(isPrime(arr[i]) && arr[i] > maxPrime)
            maxPrime = arr[i];
    }

    if(maxPrime == -1)
        printf("No prime numbers found in the array.\n");
    else
        printf("Largest prime element = %d\n", maxPrime);

    return 0;
}
