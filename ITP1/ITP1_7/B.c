#include <stdio.h>

int
main(int argc, char *argv[])
{
  for (;;) {
    int n, x;
    scanf("%d%d", &n, &x);
    if (n == 0 && x == 0) {
      break;
    }
  }
  return 0;
}
