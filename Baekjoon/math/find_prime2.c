#include <stdio.h>
#include <math.h>

int main(void)
{
  int min, max, num, div, check, idx, i;
  int primes[500000];

  scanf("%d %d", &min, &max);
  primes[0] = 2;
  primes[1] = 3;
  idx = 2;

  for (num = 5; num <= max; num += 2)
  {
    check = 0;
    for (div = 0; primes[div] * primes[div] <= num; div++)
    {
      if (num % primes[div] == 0)
      {
        check = 1;
        break;
      }
    }
    if (check == 0)
      primes[idx++] = num;
  }
  while (primes[i] < min)
    i++;
  while (i < idx)
  {
    printf("%d\n", primes[i]);
    i++;
  }
  return (0);
}