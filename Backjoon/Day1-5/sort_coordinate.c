#include <stdio.h>

#define N 100000

int main(void)
{
  int i, j, n, temp, arr[N][2];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  for (i = 1; i < n; i++)
  {
    temp = arr[i][0];
    for (j = i; j > 0 && arr[j - 1][0] >= temp; j--)
    {
      arr[j - 1][2] = arr[j][2];
    }
    arr[j][2] = temp;
  }
  for (i = 0; i < n; i++)
    printf("%d %d\n", arr[i][0], arr[i][1]);
  return (0);
}