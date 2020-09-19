#include <stdio.h>
#include <string.h>

#define ALNUM 26
#define STRNUM 1000000

int main(void)
{
  int cnt, max, max_i, i, alpha[ALNUM];
  char str[STRNUM];

  memset(alpha, 0, ALNUM * sizeof(int));
  scanf("%s", &str[0]);
  for (i = 0; str[i]; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      alpha[str[i] - 'a']++;
    else
      alpha[str[i] - 'A']++;
  }
  max = 0;
  for (i = 0; i < ALNUM; i++)
  {
    if (alpha[i] > max)
    {
      max = alpha[i];
      max_i = i;
    }
  }
  cnt = 0;
  for (i = 0; i < ALNUM; i++)
  {
    if (alpha[i] == max)
      cnt++;
    if (cnt == 2)
    {
      printf("?\n");
      return (0);
    }
  }
  printf("%c\n", max_i + 'A');

  return (0);
}