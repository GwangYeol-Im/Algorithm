#include <stdio.h>

int main(void)
{
  int n, arm_num, six_cnt, temp;

  scanf("%d", &n);
  arm_num = 666;
  while (1)
  {
    six_cnt = 0;
    temp = arm_num;
    while (temp)
    {
      six_cnt = temp % 10 == 6 ? six_cnt + 1 : 0;
      if (six_cnt == 3)
      {
        n--;
        break;
      }
      temp /= 10;
    }
    if (n == 0)
      break;
    arm_num++;
  }
  printf("%d", arm_num);
  return (0);
}