//WAP FOR DEMONSTRATING TRANSPOSE OF MATRX

#include <stdio.h>
int main() {
  int a[3][3], t[3][3], i,j;
// asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (i = 0; i < 3; ++i)
  for (j = 0; j < 3; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
// printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (i = 0; i < 3; ++i)
  for (j = 0; j < 3; ++j) {
    printf("%d  ", a[i][j]);
    if (j == 3 - 1)
    printf("\n");
  }
  // computing the transpose
  for (i = 0; i < 3; ++i)
  for (j = 0; j < 3; ++j) {
    t[j][i] = a[i][j];
  }
  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (i = 0; i < 3; ++i)
  for (j = 0; j < 3; ++j) {
    printf("%d  ", t[i][j]);
    if (j == 3 - 1)
    printf("\n");
  }
  return 0;
}