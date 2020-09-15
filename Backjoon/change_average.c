#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, subject, max_score;
  int *scores;
  float sum, new_score;

  scanf("%d", &subject);
  scores = malloc(sizeof(int) * subject);
  max_score = 0;
  for (i = 0; i < subject; i++)
  {
    scanf("%d", &scores[i]);
    max_score = scores[i] > max_score ? scores[i] : max_score;
  }
  sum = 0;
  for (i = 0; i < subject; i++)
  {
    new_score = (float)scores[i] / max_score * 100;
    sum += new_score;
  }
  printf("%f\n", sum / subject);
  free(scores);

  return (0);
}