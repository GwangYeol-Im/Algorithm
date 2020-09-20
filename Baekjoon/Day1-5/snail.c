#include <stdio.h>

int main(void)
{
  int process, up, down, goal, day;

  scanf("%d %d %d", &up, &down, &goal);
  day = 1;
  process = 0;
  while (1)
  {
    process += up;
    if (process >= goal)
      break;
    process -= down;
    day++;
  }
  printf("%d\n", day);
  return (0);
}