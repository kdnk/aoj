#include <stdio.h>
#include <math.h>

int
main(void)
{
  double r;
  scanf("%lf", &r);
  printf("%lf %lf\n", M_PI * r * r, 2 * M_PI * r);
}
