#include <stdio.h>

int check_prime(int num)
{
  int div;

  if (num < 2)
    return (0);
  div = 2;
  while (div * div <= num)
  {
    if (num % div == 0)
      return (0);
    div++;
  }
  return (1);
}

int main(void)
{
  int min, max, sum, min_prime;

  scanf("%d %d", &min, &max);
  sum = 0;
  while (!check_prime(min))
  {
    min++;
  }
  if (min > max)
  {
    printf("-1\n");
    return (0);
  }
  min_prime = min;
  sum = min;
  min = min % 2 == 0 ? min + 1 : min + 2;
  while (min <= max)
  {
    if (check_prime(min))
      sum += min;
    min += 2;
  }
  printf("%d\n%d\n", sum, min_prime);
  return (0);
}