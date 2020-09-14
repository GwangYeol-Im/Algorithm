#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *str = malloc(sizeof(char) * 30);

  scanf("%s", str);

  printf("%lu", strlen(str));

  return (0);
}