#include <stdio.h>

static void do_calc(int m, int f, int r);

int
main(int argc, char *argv[])
{
  for(;;) {
    int m, f, r;
    scanf("%d%d%d", &m, &f, &r);
    if (m == -1 && f == -1 && r == -1) {
      break;
    }
    do_calc(m, f, r);
  }
  return 0;
}

static void
do_calc(int m, int f, int r)
{
  if (m == -1 || f == -1) {
    printf("%s\n", "F");
    return;
  }
  int sum = m + f;
  if (sum >= 80) {
    printf("%s\n", "A");
    return;
  } else if (sum >= 65 && sum < 80) {
    printf("%s\n", "B");
    return;
  } else if (sum >= 50 && sum < 65) {
    printf("%s\n", "C");
    return;
  } else if (sum >= 30 && sum < 50) {
    if (r >= 50) {
      printf("%s\n", "C");
      return;
    }
    printf("%s\n", "D");
    return;
  } else {
    printf("%s\n", "F");
    return;
  }
}
