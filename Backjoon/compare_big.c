#include <stdio.h>
#include <stdlib.h>

int than_bigger(int **profile, int i, int cmp)
{
  if (profile[i][0] >= profile[cmp][0])
    return (0);
  else if (profile[i][1] >= profile[cmp][1])
    return (0);
  return (1);
}

int main(void)
{
  int i, cmp, cnt, person;
  int **profile;

  scanf("%d", &person);
  profile = malloc(sizeof(int *) * person);
  for (i = 0; i < person; i++)
  {
    profile[i] = malloc(sizeof(int) * 2);
    scanf("%d %d", &profile[i][0], &profile[i][1]);
  }
  for (i = 0; i < person; i++)
  {
    cnt = 1;
    for (cmp = 0; cmp < person; cmp++)
    {
      if (i == cmp)
        continue;
      if (than_bigger(profile, i, cmp))
        cnt++;
    }
    printf("%d ", cnt);
  }
  printf("\n");
  return (0);
}