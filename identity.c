#include <stdio.h>
int main() {
 int n, i, j, is_identity = 1;
 printf("Enter the size of the square matrix (n x n): ");
 scanf("%d", &n);
 int matrix[n][n];
 printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        scanf("%d", &matrix[i][j]);
      }
    }
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
      if (i == j && matrix[i][j] != 1) {
      is_identity = 0;
      break;
    } else if (i != j && matrix[i][j] != 0) {
      is_identity = 0;
      break;
    }
  }
  if (!is_identity) break;
  }
  if (is_identity) {
    printf("The matrix is an identity matrix.\n");
  } else {
     printf("The matrix is not an identity matrix.\n");
  }
 return 0;
}