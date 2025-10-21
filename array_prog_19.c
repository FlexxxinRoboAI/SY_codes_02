// count the number of prime numbers in an array
#include <stdio.h>

int isPrime(int num) {
    if(num < 2)
        return 0;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n, i, primeCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(isPrime(arr[i]))
            primeCount++;
    }

    printf("Number of prime elements = %d\n", primeCount);
    return 0;
}
