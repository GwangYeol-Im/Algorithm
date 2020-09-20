#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int card_n, blackjack, max, sum;
  int *deck;

  scanf("%d %d", &card_n, &blackjack);
  deck = malloc(sizeof(int) * card_n);
  for (int i = 0; i < card_n; i++)
  {
    scanf("%d", &deck[i]);
  }
  max = 0;
  for (int i = 0; i < card_n - 2; i++)
  {
    for (int j = i + 1; j < card_n - 1; j++)
    {
      for (int k = j + 1; k < card_n; k++)
      {
        sum = deck[i] + deck[j] + deck[k];
        max = sum > max ? blackjack >= sum ? sum : max : max;
      }
    }
  }
  printf("%d\n", max);
  free(deck);
  return (0);
}