#include <stdio.h>

void swap(int arr[][2], int idx)
{
  int temp[2];

  temp[0] = arr[idx][0];
  temp[1] = arr[idx][1];
  arr[idx][0] = arr[idx + 1][0];
  arr[idx][1] = arr[idx + 1][1];
  arr[idx + 1][0] = temp[0];
  arr[idx + 1][1] = temp[1];
}

int main(void)
{
  int arr[100000][2];
  int case_n, i, j;

  scanf("%d", &case_n);
  for (i = 0; i < case_n; i++)
  {
    scanf("%d %d", &arr[i][0], &arr[i][1]);
  }
  for (i = 0; i < case_n - 1; i++)
  {
    for (j = 0; j < case_n - i - 1; j++)
    {
      if (arr[j][0] > arr[j + 1][0])
        swap(arr, j);
      if (arr[j][0] == arr[j + 1][0] && arr[j][1] > arr[j + 1][1])
        swap(arr, j);
    }
  }
  for (i = 0; i < case_n; i++)
  {
    printf("%d %d\n", arr[i][0], arr[i][1]);
  }
  return (0);
}