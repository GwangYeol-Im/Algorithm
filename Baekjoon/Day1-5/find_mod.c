#include <stdio.h>

int check_overlap(int arr[], int idx)
{
  for (int overlap = 0; overlap < idx; overlap++)
  {
    if (arr[overlap] == arr[idx])
      return (1);
  }
  return (0);
}

int main(void)
{
  int i, cnt;
  int arr[10];

  for (i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
    arr[i] %= 42;
  }
  cnt = 0;
  for (i = 0; i < 10; i++)
  {
    if (!check_overlap(arr, i))
      cnt++;
  }
  printf("%d\n", cnt);

  return (0);
}