#include <stdio.h>
#include <stdlib.h>

static void do_calc(int a_i[], int b[], int n, int m);

int
main(int argc, char *argv[])
{
  // n, m
  int n, m;
  scanf("%d%d", &n, &m);

  int i;

  // a
  int a[n][m];
  for (i = 0; i < n; i++) {
    int j;
    for (j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // b
  int b[m];
  for (i = 0; i < m; i++) {
    scanf("%d", &b[i]);
  }
  // calc
  for (i = 0; i < n; i++) {
    do_calc(a[i], b, n, m);
  }
  return 0;
}

static void
do_calc(int a_i[], int b[], int n, int m)
{
  int j;
  int sum = 0;
  for (j = 0; j < m; j++) {
    sum += a_i[j] * b[j];
  }
  printf("%d\n", sum);
  return;
}
