// count zeros in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, zeroCount = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0)
                zeroCount++;
        }
    }

    printf("\nTotal zeros in the matrix = %d\n", zeroCount);

    return 0;
}
