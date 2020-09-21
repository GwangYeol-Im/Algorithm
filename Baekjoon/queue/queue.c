#include <stdio.h>
#include <string.h>

void push(int queue[], int *end)
{
  int n;

  scanf("%d", &n);
  queue[*end] = n;
  *end += 1;
}

void pop(int queue[], int *srt, int *end)
{
  if (*end == *srt)
  {
    printf("-1\n");
    return;
  }
  printf("%d\n", queue[*srt]);
  *srt += 1;
}

int main(void)
{
  int queue[100000];
  int case_n, srt, end;
  char str[10];

  srt = 0;
  end = 0;
  scanf("%d", &case_n);
  while (case_n--)
  {
    scanf("%s", str);
    if (strcmp(str, "push") == 0)
      push(queue, &end);
    else if (strcmp(str, "pop") == 0)
      pop(queue, &srt, &end);
    else if (strcmp(str, "size") == 0)
      printf("%d\n", end - srt);
    else if (strcmp(str, "empty") == 0)
      printf("%d\n", srt == end ? 1 : 0);
    else if (strcmp(str, "front") == 0)
      printf("%d\n", queue[srt]);
    else
      printf("%d\n", queue[end - 1]);
  }
  return (0);
}