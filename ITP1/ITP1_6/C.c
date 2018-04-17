#include <stdio.h>

struct resident_tag {
  int b; // 棟
  int f; // 階
  int r; // 部屋番号
  int v; // 人数
};
typedef struct resident_tag resident;

int
main(void)
{
  int count, i;
  scanf("%d", &count);
  resident data[count];
  for (i = 0; i < count; i++) {
    scanf("%d%d%d%d",&data.b, &data.f, &data.r, &data.v);
  }
}
