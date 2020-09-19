#include <stdio.h>

int get_sum(int num)
{
  int sum;

  sum = num;
  while (num)
  {
    sum += num % 10;
    num /= 10;
  }
  return (sum);
}

int main(void)
{
  int n, i, sum;

  scanf("%d", &n);
  if (n == 1)
  {
    printf("0\n");
    return (0);
  }
  for (i = 0; i < n; i++)
  {
    sum = get_sum(i);
    if (sum == n)
    {
      printf("%d\n", i);
      return (0);
    }
  }
  printf("0\n");
  return (0);
}