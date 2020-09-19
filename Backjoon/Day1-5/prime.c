#include <stdio.h>

int main(void)
{
  int i, n;
  int primes[500];
  int prime = 0;
  unsigned int cnt = 0;

  primes[prime++] = 2;
  primes[prime++] = 3;
  for (n = 5; n <= 1000; n += 2)
  {
    int flag = 0;
    for (i = 1; primes[i] * primes[i] <= n; i++)
    {
      cnt++;
      if (n % primes[i] == 0)
      {
        flag = 1;
        break;
      }
    }
    if (!flag)
      primes[prime++] = n;
  }
  for (i = 0; i < prime; i++)
  {
    printf("%d\n", primes[i]);
  }
  printf("나눗셈 횟수: %u\n", cnt);

  return (0);
}