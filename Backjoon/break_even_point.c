#include <stdio.h>

int main(void)
{
  int fixed, variable, sales, n, gain;

  scanf("%d %d %d", &fixed, &variable, &sales);
  if ((gain = sales - variable) <= 0)
  {
    puts("-1\n");
    return (0);
  }
  printf("%d\n", fixed / gain + 1);

  return (0);
}