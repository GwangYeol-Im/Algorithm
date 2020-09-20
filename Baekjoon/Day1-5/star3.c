#include <stdio.h>

int main(void)
{
  int n, row, col;

  scanf("%d", &n);

  if (n == 1)
  {
    printf("*\n");
    return (0);
  }

  for (row = 0; row < n * 2; row++)
  {
    for (col = 0; col < n; col++)
    {
      if (row % 2 == 0)
        printf("%c", col % 2 == 0 ? '*' : ' ');
      else
        printf("%c", col % 2 != 0 ? '*' : ' ');
    }
    printf("\n");
  }
  return (0);
}