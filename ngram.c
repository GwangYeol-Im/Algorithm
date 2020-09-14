#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *str = malloc(sizeof(char) * 11);
  int n;
  int idx = 0;
  int i = 0;

  scanf("%d %s", &n, str);

  if (strlen(str) < n)
    printf("wrong");

  while (1)
  {
    if (!str[idx + n - 1])
      break;
    for (i = idx; i < idx + n; i++)
      printf("%c", str[i]);
    printf("\n");
    idx++;
  }

  return (0);
}