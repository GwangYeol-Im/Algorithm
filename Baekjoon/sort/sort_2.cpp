#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
  int T;
  int arr[1000001];

  scanf("%d", &T);
  for (int i = 0; i < T; i++)
    scanf("%d", &arr[i]);
  sort(arr, arr + T);
  printf("%d\n", arr[0]);
  for (int i = 1; i < T; i++)
  {
    if (arr[i] == arr[i - 1])
      continue;
    printf("%d\n", arr[i]);
  }
}