#include <stdio.h>

int main(void)
{
  int case_n, guest, w, h, room_n;

  scanf("%d", &case_n);
  while (case_n--)
  {
    scanf("%d %d %d", &h, &w, &guest);
    room_n = (guest % h == 0 ? h : guest % h) * 100 + ((guest - 1) / h + 1);
    printf("%d\n", room_n);
  }
  return (0);
}