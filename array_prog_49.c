// find the sum of all elements in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j]; // add each element to total
        }
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
