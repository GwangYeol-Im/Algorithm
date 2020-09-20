#include <stdio.h>

int main(void)
{
  int i, a, b, rev_a, rev_b;

  scanf("%d %d", &a, &b);
  rev_a = 0;
  rev_b = 0;
  for (i = 0; i < 3; i++)
  {
    rev_a = rev_a * 10 + a % 10;
    rev_b = rev_b * 10 + b % 10;
    a /= 10;
    b /= 10;
  }
  printf("%d\n", rev_a > rev_b ? rev_a : rev_b);
  return (0);
}