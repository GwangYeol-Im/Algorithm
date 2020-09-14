#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  char *str = malloc(sizeof(char) * 60);
  int the_count = 0;

  scanf("%[^\n]s", str);
  str = strtok(str, "the");
  while (str)
  {
    printf("%s\n", str);
    str = strtok(NULL, "the");
  }
  return (0);
}