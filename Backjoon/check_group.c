#include <stdio.h>

int check_validation(char str[])
{
  int i;
  int alpha[26] = {0};
  char check;

  check = str[0];
  alpha[check - 'a'] = 1;
  for (i = 0; str[i]; i++)
  {
    if (str[i] == check)
      continue;

    check = str[i];
    if (alpha[check - 'a'] == 1)
      return (0);
    alpha[check - 'a'] = 1;
  }
  return (1);
}

int main(void)
{
  int n, cnt = 0;
  char str[101] = {0};

  scanf("%d", &n);
  while (n--)
  {
    scanf("%s", &str[0]);
    if (check_validation(str))
      cnt++;
  }
  printf("%d\n", cnt);
  return (0);
}