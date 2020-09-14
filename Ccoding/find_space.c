#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *str = malloc(sizeof(char) * 1000);
  int cnt = 0;

  scanf("%[^\n]s", str);

  while (str)
  {
    if ((str = strstr(str, " ")))
      cnt++;
    str = strstr(str + 1, " ");
  }

  printf("%d\n", cnt);

  return (0);
}