// find sum of each row and each column of a matrix
#include <stdio.h>

int main() {
    int r, c, i, j;

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

    // Row sum
    printf("\nSum of each row:\n");
    for (i = 0; i < r; i++) {
        int rowSum = 0;
        for (j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    // Column sum
    printf("\nSum of each column:\n");
    for (j = 0; j < c; j++) {
        int colSum = 0;
        for (i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
