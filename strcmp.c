#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *s1 = malloc(sizeof(char) * 30);
  char *s2 = malloc(sizeof(char) * 30);

  scanf("%s %s", s1, s2);
  printf("%d\n", strcmp(s1, s2));

  return (0);
}