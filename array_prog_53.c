// count positive, negative, and zero elements in a matrix
#include <stdio.h>

int main() {
    int r, c, i, j;
    int posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 0)
                posCount++;
            else if(mat[i][j] < 0)
                negCount++;
            else
                zeroCount++;
        }
    }

    printf("\nTotal positive numbers = %d\n", posCount);
    printf("Total negative numbers = %d\n", negCount);
    printf("Total zeros = %d\n", zeroCount);

    return 0;
}
