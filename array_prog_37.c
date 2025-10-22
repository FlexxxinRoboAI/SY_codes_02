// find the minimum element in each column of a matrix
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

    printf("\nMinimum element in each column:\n");
    for(j = 0; j < c; j++) {
        int min = mat[0][j];
        for(i = 1; i < r; i++) {
            if(mat[i][j] < min)
                min = mat[i][j];
        }
        printf("Column %d = %d\n", j + 1, min);
    }

    return 0;
}
