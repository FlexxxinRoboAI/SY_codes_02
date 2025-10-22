// display the upper triangular matrix
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Upper Triangular Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i > j)
                printf("0 ");
            else
                printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
