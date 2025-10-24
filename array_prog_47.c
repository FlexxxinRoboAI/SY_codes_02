//  find the largest element in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, max;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Assume first element is max
    max = mat[0][0];

    // Check every element
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (mat[i][j] > max)
                max = mat[i][j];
        }
    }

    printf("\nLargest element in the matrix = %d\n", max);

    return 0;
}
