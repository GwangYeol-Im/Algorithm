#include <stdio.h>

int check_prime(int n)
{
  int div;

  div = 2;
  while (div * div <= n)
  {
    if (n % div == 0)
      return (0);
    div++;
  }
  return (1);
}

int main(void)
{
  int n, i, cnt;

  scanf("%d", &n);
  while (n > 0)
  {
    cnt = 0;
    for (i = n + 1; i <= n * 2; i++)
    {
      if (check_prime(i))
        cnt++;
    }
    printf("%d\n", cnt);
    scanf("%d", &n);
  }
  return (0);
}