#include <stdio.h>

int main(void)
{
  int n, check, i;

  scanf("%d", &n);
  check = 0;
  i = 1;
  while (1)
  {
    check += i;
    if (n <= check)
      break;
    i++;
  }
  check -= n;
  if (i % 2 == 0)
    printf("%d/%d\n", i - check, 1 + check);
  else
    printf("%d/%d\n", 1 + check, i - check);
  return (0);
}