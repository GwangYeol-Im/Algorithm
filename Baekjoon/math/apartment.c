#include <stdio.h>

#define N 15

int main(void)
{
  int i, j, k, n, case_n;
  int apartment[N][N];

  for (i = 1; i < N; i++)
  {
    apartment[0][i] = i;
    apartment[i][1] = 1;
  }
  for (i = 0; i < N - 1; i++)
  {
    for (j = 1; j < N - 1; j++)
      apartment[i + 1][j + 1] = apartment[i + 1][j] + apartment[i][j + 1];
  }
  scanf("%d", &case_n);
  while (case_n--)
  {
    scanf("%d", &k);
    scanf("%d", &n);
    printf("%d\n", apartment[k][n]);
  }

  return (0);
}