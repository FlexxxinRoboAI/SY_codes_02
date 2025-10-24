//check if a square matrix is upper triangular
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Check for upper triangular (all elements below diagonal must be 0)
    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(mat[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("The matrix is upper triangular.\n");
    else
        printf("The matrix is not upper triangular.\n");

    return 0;
}
