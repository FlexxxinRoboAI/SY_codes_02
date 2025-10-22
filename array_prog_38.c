// check whether a matrix is symmetric or not
#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Check for symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(mat[i][j] != mat[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("✅ The matrix is symmetric.\n");
    else
        printf("❌ The matrix is not symmetric.\n");

    return 0;
}
