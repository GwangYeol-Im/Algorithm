#include <stdio.h>

int main(void)
{
  int check;
  int cnt = 0;
  int digit_sum;
  int temp;

  scanf("%d", &check);
  temp = check;
  while (1)
  {
    digit_sum = (temp / 10) + (temp % 10);
    temp = (temp % 10) * 10 + (digit_sum % 10);
    cnt++;
    if (check == temp)
      break;
  }
  printf("%d\n", cnt);

  return (0);
}