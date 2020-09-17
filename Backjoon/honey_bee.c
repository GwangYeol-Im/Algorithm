#include <stdio.h>

int main(void)
{
  int room_n, route, i;

  scanf("%d", &room_n);
  route = 1;
  i = 0;
  while (1)
  {
    route += (6 * i);
    if (room_n <= route)
    {
      printf("%d\n", i + 1);
      return (0);
    }
    i++;
  }
}