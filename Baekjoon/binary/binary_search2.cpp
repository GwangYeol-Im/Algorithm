#include <cstdio>
#include <algorithm>

using namespace std;

void print_count(int deck[], int len, int num)
{
  int l, r, m, temp, cnt = 0;

  l = 0;
  r = len - 1;
  while (r - l >= 0)
  {
    m = (l + r) / 2;
    if (deck[m] == num)
    {
      temp = m + 1;
      while (deck[m--] == num)
        cnt++;
      while (deck[temp++] == num)
        cnt++;
      printf("%d\n", cnt);
      break;
    }
    else if (deck[m] > num)
      r = m - 1;
    else
      l = m + 1;
  }
  if (l > r)
    printf("0\n");
}

int main(void)
{
  int cards, T, search;
  int deck[500000];

  scanf("%d", &cards);
  for (int i = 0; i < cards; i++)
    scanf("%d", &deck[i]);
  sort(deck, deck + cards);
  scanf("%d", &T);
  while (T--)
  {
    scanf("%d", &search);
    print_count(deck, cards, search);
  }
  return (0);
}