#include <stdio.h>

void print_rates()
{
  int i, student_n, sum, high_cnt;
  int scores[1000];
  float average;

  scanf("%d", &student_n);
  sum = 0;
  for (i = 0; i < student_n; i++)
  {
    scanf("%d", &scores[i]);
    sum += scores[i];
  }
  average = sum / student_n;
  high_cnt = 0;
  for (i = 0; i < student_n; i++)
  {
    if (scores[i] > average)
      high_cnt++;
  }
  printf("%.3f%%\n", (float)high_cnt / student_n * 100);
}

int main(void)
{
  int i, case_n;

  scanf("%d", &case_n);
  for (i = 0; i < case_n; i++)
  {
    print_rates();
  }
  return (0);
}