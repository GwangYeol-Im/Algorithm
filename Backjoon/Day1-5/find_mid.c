#include <stdio.h>

int main(void)
{
  int a, b, c, min;

  scanf("%d %d %d", &a, &b, &c);
  if (a > b)
    min = b > c ? b : a > c ? c : a;
  else
    min = a > c ? a : b > c ? c : b;
  printf("%d\n", min);

  return (0);
}