#include <stdio.h>

int main(void)
{
  int x, y;

  scanf("%d", &x);
  scanf("%d", &y);

  if (x > 0)
    printf(y > 0 ? "1\n" : "4\n");
  else
    printf(y > 0 ? "2\n" : "3\n");

  return (0);
}