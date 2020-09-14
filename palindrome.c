#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *str = malloc(sizeof(char) * 31);
  char *check = malloc(sizeof(char) * 31);
  int idx = 0;
  int len = 0;

  scanf("%[^\n]s", str);

  while (*str)
  {
    if (*str != ' ')
      check[idx++] = *str;
    str++;
  }
  check[idx] = 0;
  len = idx;

  for (idx = 0; idx < len / 2; idx++)
  {
    if (check[idx] != check[len - idx - 1])
    {
      printf("0");
      return (0);
    }
  }
  printf("1");

  free(str);
  free(check);
  return (0);
}
