// subtract two matrices
#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int mat1[r][c], mat2[r][c], diff[r][c];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &mat2[i][j]);

    // Subtract matrices
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            diff[i][j] = mat1[i][j] - mat2[i][j];

    printf("Difference of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}
