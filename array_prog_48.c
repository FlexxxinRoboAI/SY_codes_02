// find the smallest element in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, min;

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

    // Assume first element is minimum
    min = mat[0][0];

    // Traverse the matrix to find smallest element
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (mat[i][j] < min)
                min = mat[i][j];
        }
    }

    printf("\nSmallest element in the matrix = %d\n", min);

    return 0;
}
