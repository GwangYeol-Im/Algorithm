#include <stdio.h>

#define STRLEN 1000000

int main(void)
{
  char str[STRLEN] = {0};
  int i, cnt;

  scanf("%[^\n]s", &str[0]);
  if (!str[0] || (str[0] == ' ' && !str[1]))
  {
    printf("0\n");
    return (0);
  }
  cnt = 1;
  for (i = 0; str[i]; i++)
  {
    if (i == 0 || !str[i + 1])
    {
      if (str[i] == ' ')
        continue;
    }
    if (str[i] == ' ')
      cnt++;
  }
  printf("%d\n", cnt);

  return (0);
}