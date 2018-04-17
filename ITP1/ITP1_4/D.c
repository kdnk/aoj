#include <stdio.h>

int
main(void)
{
  int count, i, input, max = -1000000, min = 1000000;
  long sum = 0;
  scanf("%d", &count);
  for (i = 0; i < count; i++) {
    scanf("%d", &input);
    sum += input;
    if (max < input) {
      max = input;
    }
    if (min > input) {
      min = input;
    }
  }
  printf("%d %d %ld\n", min, max, sum);
  return 0;
}
