#include <stdio.h>

void print_new_str(int repeat, char str[])
{
  int i, n;

  i = 0;
  while (str[i])
  {
    for (n = 0; n < repeat; n++)
    {
      printf("%c", str[i]);
    }
    i++;
  }
  printf("\n");
}

int main(void)
{
  int i, repeat, case_n;
  char str[21] = {0};

  str[20] = 0;
  scanf("%d", &case_n);
  for (i = 0; i < case_n; i++)
  {
    scanf("%d %s", &repeat, &str[0]);
    print_new_str(repeat, str);
  }
  return (0);
}