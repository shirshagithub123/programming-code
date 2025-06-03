#include <stdio.h>
int isSparseMatrix(int mat[10][10], int rows, int cols) {
    int zeroCount = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }

    // A sparse matrix has more zero elements than non-zero elements
    if (zeroCount > totalElements / 2) {
        return 1; // It is a sparse matrix
    } else {
        return 0; // It is not a sparse matrix
    }
}
int main() {
    int mat[10][10], rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isSparseMatrix(mat, rows, cols)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
