#include <stdio.h>

int main(void)
{
  int i, cmp, people, temp, time;
  int wait[1000];

  scanf("%d", &people);
  for (i = 0; i < people; i++)
  {
    scanf("%d", &wait[i]);
  }
  for (i = 0; i < people - 1; i++)
  {
    for (cmp = 0; cmp < people - i - 1; cmp++)
    {
      if (wait[cmp] < wait[cmp + 1])
      {
        temp = wait[cmp];
        wait[cmp] = wait[cmp + 1];
        wait[cmp + 1] = temp;
      }
    }
  }
  time = 0;
  while (people--)
  {
    time += wait[people] * (people + 1);
  }
  printf("%d\n", time);

  return (0);
}