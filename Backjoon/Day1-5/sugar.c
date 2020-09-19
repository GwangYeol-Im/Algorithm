#include <stdio.h>

int main(void)
{
  int sugar, n, check;

  scanf("%d", &sugar);

  n = 0;
  while (1)
  {
    check = sugar - 3 * n;
    if (check % 5 == 0)
    {
      printf("%d\n", check / 5 + n);
      return (0);
    }
    if (check < 0)
    {
      puts("-1");
      return (0);
    }
    n++;
  }
}