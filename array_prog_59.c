// find frequency of each element in an array
#include <stdio.h>

int main() {
    int n, i, j, count;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], visited[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array
    }

    printf("\nFrequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;
        count = 1;
        for(j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // mark as visited
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
