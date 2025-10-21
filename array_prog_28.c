// find the sum of diagonal elements of a square matrix
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        sum += mat[i][i]; // sum of primary diagonal
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
