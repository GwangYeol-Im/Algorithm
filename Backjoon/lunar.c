#include <stdio.h>

int main(void)
{
  int lunar;

  scanf("%d", &lunar);
  if (lunar % 4 == 0 && lunar % 100 != 0)
    printf("1\n");
  else if (lunar % 400 == 0)
    printf("1\n");
  else
    printf("0\n");
  return (0);
}