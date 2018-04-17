#include <stdio.h>

int
main(int argc, char *argv[])
{
  int r, c;
  int i, j;
  scanf("%d%d", &r, &c);

  int a[r+1][c+1];
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // c
  for (i = 0; i < r; i++) {
    a[i][c] = 0;
    for (j = 0; j < c; j++) {
      a[i][c] += a[i][j];
    }
  }

  // r
  for (j = 0; j < c; j++) {
    a[r][j] = 0;
    for (i = 0; i < r; i++) {
      a[r][j] += a[i][j];
    }
  }

  // total
  int total = 0;
  for (i = 0; i < r; i++) {
    total += a[i][c];
  }
  a[r][c] = total;

  // print
  for (i = 0; i < r+1; i++) {
    for (j = 0; j < c+1; j++) {
      printf("%d", a[i][j]);
      if (j == c) {
        printf("\n");
      } else {
        printf(" ");
      }
    }
  }
}
