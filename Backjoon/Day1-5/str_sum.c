#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, n, sum;
  char *str;

  scanf("%d", &n);
  str = malloc(sizeof(char) * (n + 1));
  str[n] = 0;
  scanf("%s", str);
  i = 0;
  sum = 0;
  while (str[i])
  {
    sum += str[i] - '0';
    i++;
  }
  printf("%d\n", sum);

  return (0);
}