#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

void binary(int arr[], int len, int num)
{
  int l, m, r;

  l = 0;
  r = len - 1;
  while (r - l >= 0)
  {
    m = (l + r) / 2;
    if (arr[m] == num)
    {
      printf("1\n");
      return;
    }
    else if (arr[m] > num)
      r = m - 1;
    else
      l = m + 1;
  }
  printf("0\n");
}

int main(void)
{
  int digits, num, T, search;
  int arr[100001];

  scanf("%d", &digits);
  for (int i = 0; i < digits; i++)
  {
    scanf("%d", &arr[i]);
  }
  sort(arr, arr + digits);
  scanf("%d\n", &T);
  for (int i = 0; i < T; i++)
  {
    scanf("%d", &search);
    binary(arr, digits, search);
  }

  return (0);
}