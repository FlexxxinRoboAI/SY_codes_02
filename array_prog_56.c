// check if a square matrix is lower triangular
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

    // Check for lower triangular (all elements above diagonal must be 0)
    for(i = 0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if(mat[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("✅ The matrix is lower triangular.\n");
    else
        printf("❌ The matrix is not lower triangular.\n");

    return 0;
}
