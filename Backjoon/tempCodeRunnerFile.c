// #include <stdio.h>

// int main(void)
// {
//   int card_n, blackjack, max, sum;
//   int deck[100] = {0};

//   scanf("%d %d", &card_n, &blackjack);
//   for (int i = 0; i < card_n; i++)
//   {
//     scanf("%d", &deck[i]);
//   }
//   for (int i = 0; i < card_n; i++)
//   {
//     for (int j = i + 1; j < card_n; j++)
//     {
//       for (int k = j + 1; k < card_n; k++)
//       {
//         sum = deck[i] + deck[j] + deck[k];
//         if (sum > max && sum < blackjack)
//           max = sum;
//       }
//     }
//   }
//   printf("%d\n", max);
//   return (0);
// }