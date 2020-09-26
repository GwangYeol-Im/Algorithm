#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
  int cards, temp, T, search;
  vector<int> deck;

  scanf("%d", &cards);
  for (int i = 0; i < cards; i++)
  {
    scanf("%d", &temp);
    deck.push_back(temp);
  }
  sort(deck.begin(), deck.end());
  scanf("%d", &T);
  while (T--)
  {
    scanf("%d", &search);
    auto lower = lower_bound(deck.begin(), deck.end(), search);
    auto upper = upper_bound(deck.begin(), deck.end(), search);
    printf("%ld ", upper - lower);
  }
  printf("\n");
  return (0);
}