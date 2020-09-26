#include <cstdio>

using namespace std;

int main(void)
{
  int k, n, sum, check, cnt;
  int arr[10000];

  scanf("%d %d", &k, &n);
  sum = 0;
  for (int i = 0; i < k; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  check = sum / n;
  while (1)
  {
    cnt = 0;
    for (int i = 0; i < k; i++)
    {
      cnt += arr[i] / check;
    }
    if (cnt == n)
    {
      printf("%d\n", check);
      return (0);
    }
    check--;
  }
}