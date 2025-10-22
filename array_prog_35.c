// find the sum of each row and column of a matrix
#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat[r][c];
    printf("Enter elements of %dx%d matrix:\n", r, c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    // Sum of each row
    printf("\nSum of each row:\n");
    for(i = 0; i < r; i++) {
        int rowSum = 0;
        for(j = 0; j < c; j++)
            rowSum += mat[i][j];
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    // Sum of each column
    printf("\nSum of each column:\n");
    for(j = 0; j < c; j++) {
        int colSum = 0;
        for(i = 0; i < r; i++)
            colSum += mat[i][j];
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
