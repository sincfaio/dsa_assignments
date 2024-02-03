#include <stdio.h>
// mudits chinese code
int main() {
  int n;
  scanf("%d", &n);

  int matrix[n][n];

  int d_i = 0;
  int d_j = 1;
  int offset = 0;
  int current = 1;
  while (offset < n) {
    if (d_j == 1) {
      for (int i = offset; i < n - offset; i++) {
        matrix[offset][i] = current;
        current += 1;
      }
      d_j = 0;
      d_i = 1;
      offset += 1;
    } else if (d_j == -1) {
      for (int i = n - 1 - offset; i >= offset - 1; i--) {
        matrix[n - offset][i] = current;
        current += 1;
      }
      d_j = 0;
      d_i = -1;
    } else if (d_i == 1) {
      for (int i = offset; i < n - offset + 1; i++) {
        matrix[i][n - offset] = current;
        current += 1;
      }
      d_i = 0;
      d_j = -1;
    } else if (d_i == -1) {
      for (int i = n - 1 - offset; i >= offset; i--) {
        matrix[i][offset - 1] = current;
        current += 1;
      }
      d_i = 0;
      d_j = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}