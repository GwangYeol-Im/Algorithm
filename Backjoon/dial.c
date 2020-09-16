#include <stdio.h>

int main(void)
{
  char c, word[16] = {0};
  int i, sec;

  scanf("%s", &word[0]);
  sec = 0;
  for (i = 0; word[i]; i++)
  {
    c = word[i];
    if (c >= 'A' && c <= 'R')
      sec += (c - 'A') / 3 + 3;
    else
      switch (c)
      {
      case 'S':
        sec += 8;
        break;
      case 'T':
      case 'U':
      case 'V':
        sec += 9;
        break;
      default:
        sec += 10;
      }
  }
  printf("%d\n", sec);

  return (0);
}