#include <stdio.h>

int main(void)
{
  int h, m;

  scanf("%d %d", &h, &m);
  if ((m -= 45) < 0)
  {
    m += 60;
    if (h == 0)
      h = 23;
    else
      h -= 1;
  }
  printf("%d %d", h, m);
  return (0);
}