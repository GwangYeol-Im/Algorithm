#include <stdio.h>
#include <string.h>

#define N 26

int main(void)
{
  char word[101];
  int word_i, alpha_i;
  int alpha[N];

  memset(alpha, -1, N * sizeof(int));
  memset(word, 0, 100);
  scanf("%s", &word[0]);
  for (word_i = 0; word[word_i]; word_i++)
  {
    alpha_i = word[word_i] - 'a';
    if (alpha[alpha_i] == -1)
      alpha[alpha_i] = word_i;
  }
  for (alpha_i = 0; alpha_i < 26; alpha_i++)
  {
    printf("%d ", alpha[alpha_i]);
  }
  printf("\n");
  return (0);
}