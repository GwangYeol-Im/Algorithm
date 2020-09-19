#include <stdio.h>

int main(void)
{
  int i, n, inter_a, inter_b, cnt;

  scanf("%d", &n);
  if (n < 100)
  {
    printf("%d", n);
    return (0);
  }
  if (n == 1000)
    n = 999;
  cnt = 99;
  for (i = 100; i <= n; i++)
  {
    inter_a = i % 10 - (i / 10) % 10;
    inter_b = (i / 10) % 10 - (i / 100) % 10;
    if (inter_a == inter_b)
      cnt++;
  }
  printf("%d\n", cnt);
  return (0);
}