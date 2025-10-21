// count duplicate elements in an array
#include <stdio.h>

int main() {
    int n, i, j, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // initialize frequency array
    }

    for(i = 0; i < n; i++) {
        int dupCount = 1;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                dupCount++;
                freq[j] = 0; // mark as counted
            }
        }
        if(freq[i] != 0) {
            freq[i] = dupCount;
            if(dupCount > 1)
                count++;
        }
    }

    printf("Number of duplicate elements = %d\n", count);
    return 0;
}
