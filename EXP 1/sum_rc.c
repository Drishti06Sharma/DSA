//4.	Find the sum of rows and columns of matrix of given order (row x column).
#include <stdio.h>

int main() {
    int r, c;
    int i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[10][10];

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for(i = 0; i < r; i++) {
        int rowSum = 0;
        for(j = 0; j < c; j++) {
            rowSum = rowSum + mat[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    printf("\nSum of each column:\n");
    for(j = 0; j < c; j++) {
        int colSum = 0;
        for(i = 0; i < r; i++) {
            colSum = colSum + mat[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}
