#include <stdio.h>

int
main(void)
{
  int i = 1, input;
  while(1) {
    scanf("%d", &input);
    if (input == 0) {
      break;
    } else {
      printf("Case %d: %d\n", i, input);
      i += 1;
    }
  }
}
