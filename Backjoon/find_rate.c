#include <stdio.h>
#include <stdlib.h>

int get_high_n(float *scores, int average)
{
  int i, high_n;

  for (i = 0; scores[i]; i++)
  {
    if (scores[i] > average)
      high_n++;
  }
  return (high_n);
}

float calc_rates()
{
  int i, student_n, sum, high_n;
  float *scores;
  float average;

  scanf("%d", &student_n);
  scores = malloc(sizeof(float) * student_n);
  sum = 0;
  for (i = 0; i < student_n; i++)
  {
    scanf("%f", &scores[i]);
    sum += scores[i];
  }
  average = sum / student_n;
  high_n = get_high_n(scores, average);
  free(scores);
  return ((float)high_n / student_n * 100);
}

int main(void)
{
  int i, case_n;
  float *rates;

  scanf("%d", &case_n);
  rates = malloc(sizeof(float) * case_n);
  for (i = 0; i < case_n; i++)
  {
    rates[i] = calc_rates();
  }
  for (i = 0; i < case_n; i++)
  {
    printf("%.3f%%\n", rates[i]);
  }
  free(rates);
  return (0);
}