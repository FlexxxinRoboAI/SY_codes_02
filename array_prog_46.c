// find sum of secondary (opposite) diagonal elements of a matrix
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Sum of secondary diagonal (elements where i + j = n - 1)
    for (i = 0; i < n; i++) {
        sum += mat[i][n - i - 1];
    }

    printf("\nSum of secondary diagonal elements = %d\n", sum);

    return 0;
}
