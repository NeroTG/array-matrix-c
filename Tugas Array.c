#include <stdio.h>


int main() {
  int a[10][10], transpose[10][10], b, k;
  int i, j;
  printf("Enter rows and columns of matrix: ");
  scanf("%d %d", &b, &k);

  // deklarasi
  printf("\nEnter element of matrix:\n");
  for ( i = 0; i < b; ++i)
  for ( j = 0; j < k; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // menampilkan deklarasi
  printf("\nEntered matrix: \n");
  for ( i = 0; i < b; ++i)
  for ( j = 0; j < k; ++j) {
    printf("%d  ", a[i][j]);
    if (j == k - 1)
    printf("\n");
  }

  // transpose
  for ( i = 0; i < b; ++i)
  for ( j = 0; j < k; ++j) {
    transpose[j][i] = a[i][j];
  }

  // menampilkan transpose
  printf("\nTranspose of the matrix:\n");
  for ( i = 0; i < b; ++i)
  for ( j = 0 ;j < k; ++j) {
    printf("%d\t", transpose[i][j]);

    if (j == b - 1)

    printf("\n");
  }
  

}
