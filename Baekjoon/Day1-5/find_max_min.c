#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n, i, max, min;
  int *arr;

  scanf("%d", &n);
  arr = malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  min = arr[0];
  for (i = 1; i < n; i++)
  {
    max = max < arr[i] ? arr[i] : max;
    min = min > arr[i] ? arr[i] : min;
  }
  printf("%d %d", min, max);
  free(arr);
  return (0);
}