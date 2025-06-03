#include <stdio.h>
void sumRowsAndColumns(int rows, int cols, int mat[10][10]) {
    int rowSum, colSum;

    // Sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of elements in row %d = %d\n", i + 1, rowSum);
    }

    // Sum of each column
    for (int j = 0; j < cols; j++) {
        colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        printf("Sum of elements in column %d = %d\n", j + 1, colSum);
    }
}
int main() {
    int mat[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    sumRowsAndColumns(rows, cols, mat);

    return 0;
}
