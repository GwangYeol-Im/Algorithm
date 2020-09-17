#include <stdio.h>

int main(void)
{
  int n, i, j, temp, arr[1000];

  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  for (i = 1; i < n; i++)
  {
    temp = arr[i];
    for (j = i; j > 0 && arr[j - 1] > temp; j--)
      arr[j] = arr[j - 1];
    arr[j] = temp;
  }
  puts("------------");
  for (i = 0; i < n; i++)
    printf("%d\n", arr[i]);
  return (0);
}