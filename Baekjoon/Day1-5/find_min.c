#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  int check;
  int *arr;
  int i;

  scanf("%d %d", &n, &check);
  arr = malloc(sizeof(int) * n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++)
  {
    if (arr[i] < check)
      printf("%d ", arr[i]);
  }
  return (0);
}