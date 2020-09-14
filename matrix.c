#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  int n;
  int **matrix;
  int i;
  int j;

  scanf("%d", &n);

  if (n > 10 || n < 2)
    return (0);

  matrix = malloc(sizeof(int *) * n);

  for (i = 0; i < n; i++)
  {
    matrix[i] = malloc(sizeof(int) * n);
    memset(matrix[i], 0, sizeof(int) * n);
    matrix[i][i] = 1;
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }

  return (0);
}