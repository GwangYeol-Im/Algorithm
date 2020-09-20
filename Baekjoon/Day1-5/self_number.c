#include <stdio.h>

#define N 10001

int d_number(int idx)
{
  int sum = idx;
  while (idx)
  {
    sum += idx % 10;
    idx /= 10;
  }
  return (sum);
}

int main(void)
{
  int i, idx;
  int arr[N] = {
      0,
  };

  for (i = 0; i < N; i++)
  {
    idx = d_number(i);
    if (idx <= N)
      arr[idx] = 1;
  }
  for (i = 0; i < N; i++)
  {
    if (arr[i] == 0)
      printf("%d\n", i);
  }

  return (0);
}