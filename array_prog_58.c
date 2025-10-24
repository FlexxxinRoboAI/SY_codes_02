//  check if a square matrix is an identity matrix
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

    // Check identity matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && mat[i][j] != 1) {
                flag = 0;
                break;
            }
            if(i != j && mat[i][j] != 0) {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("✅ The matrix is an identity matrix.\n");
    else
        printf("❌ The matrix is not an identity matrix.\n");

    return 0;
}
