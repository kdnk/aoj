#include <stdio.h>

void sort(int data[], int size);

int
main(void)
{
  int data[3];
  scanf("%d%d%d", &data[0], &data[1], &data[2]);
  sort(data, 3);
  printf("%d %d %d\n", data[0], data[1], data[2]);
  return 0;
}

void
sort(int data[], int size)
{
  int i, j;
  for (i = 0; i < size; i++) {
    for (j = size - 1; j >= i; j--) {
      if (data[j - 1] > data[j]) {
        int tmp;
        tmp = data[j - 1];
        data[j - 1] = data[j];
        data[j] = tmp;
      }
    }
  }
  return;
}
