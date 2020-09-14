#include <stdio.h>

int main(void)
{
  int n;
  int i;
  int blank;
  int star;

  scanf("%d", &n);

  if (n < 3 || n > 10)
    return (0);

  for (i = 0; i < n; i++)
  {
    for (blank = 0; blank < n - i - 1; blank++)
      printf(" ");
    for (star = 0; star < i * 2 + 1; star++)
      printf("*");
    for (blank = 0; blank < n - i - 1; blank++)
      printf(" ");
    printf("\n");
  }

  return (0);
}