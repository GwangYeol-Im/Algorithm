#include <stdio.h>

int check_prime(int num)
{
  int div;

  if (num < 2)
    return (0);
  div = 2;
  while (div < num)
  {
    if (num % div == 0)
      return (0);
    div++;
  }
  return (1);
}

int main(void)
{
  int case_n, num, cnt;

  cnt = 0;
  scanf("%d", &case_n);
  while (case_n--)
  {
    scanf("%d", &num);
    if (check_prime(num))
      cnt++;
  }
  printf("%d\n", cnt);
  return (0);
}