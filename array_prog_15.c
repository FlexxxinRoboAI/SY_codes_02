// count the frequency of each element in an array
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency array
    }

    for(i = 0; i < n; i++) {
        int count = 1;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark as counted
            }
        }
        if(freq[i] != 0)
            freq[i] = count;
    }

    printf("Element | Frequency\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0)
            printf("%7d | %9d\n", arr[i], freq[i]);
    }

    return 0;
}
