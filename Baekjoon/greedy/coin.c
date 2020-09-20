#include <stdio.h>

int main(void)
{
  int units[10];
  int sum, n, i, cnt;

  scanf("%d %d", &n, &sum);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &units[i]);
  }
  cnt = 0;
  for (i = n - 1; i >= 0; i--)
  {
    if (units[i] > sum)
      continue;
    cnt += sum / units[i];
    sum %= units[i];
  }
  printf("%d\n", cnt);
  return (0);
}