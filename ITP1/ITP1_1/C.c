#include <stdio.h>

int
main(void)
{
  int a, b;
  int area, length;
  scanf("%d %d", &a, &b);
  area = a * b;
  length = 2 * a + 2 * b;
  printf("%d %d\n", area, length);
}
