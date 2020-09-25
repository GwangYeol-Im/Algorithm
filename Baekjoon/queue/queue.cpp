#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int main(void)
{
  int case_n, n;
  char command[6];
  queue<int> q;

  scanf("%d", &case_n);

  while (case_n--)
  {
    scanf("%s", &command[0]);
    if (strcmp(command, "push") == 0)
    {
      scanf("%d", &n);
      q.push(n);
    }
    else if (strcmp(command, "pop") == 0)
    {
      if (q.empty())
        printf("-1\n");
      else
      {
        printf("%d\n", q.front());
        q.pop();
      }
    }
    else if (strcmp(command, "size") == 0)
      printf("%lu\n", q.size());
    else if (strcmp(command, "empty") == 0)
      printf("%d\n", q.empty());
    else if (strcmp(command, "front") == 0)
      printf("%d\n", q.empty() ? -1 : q.front());
    else if (strcmp(command, "back") == 0)
      printf("%d\n", q.empty() ? -1 : q.back());
  }
  return (0);
}