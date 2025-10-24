//  count even and odd numbers in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j;
    int evenCount = 0, oddCount = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }
    }

    printf("\nTotal even numbers = %d\n", evenCount);
    printf("Total odd numbers  = %d\n", oddCount);

    return 0;
}
