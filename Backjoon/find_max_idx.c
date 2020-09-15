#include <stdio.h>

int main(void)
{
  int len, max, max_idx, i;
  int arr[9];

  for (i = 0; i < 9; i++)
  {
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  max_idx = 0;
  for (i = 1; i < 9; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      max_idx = i;
    }
  }
  printf("%d\n", max);
  printf("%d\n", max_idx + 1);
  return (0);
}