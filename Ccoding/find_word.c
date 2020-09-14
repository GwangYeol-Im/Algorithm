#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *str;
  char *word = "the";
  int cnt = 0;

  scanf("%[^\n]s", str);
  str = strstr(str, word);
  while (str)
  {
    if (*(str + 3) <= 'a' || *(str + 3) >= 'z')
      cnt++;
    str = strstr(str + 1, word);
  }
  printf("%d", cnt);
  return (0);
}