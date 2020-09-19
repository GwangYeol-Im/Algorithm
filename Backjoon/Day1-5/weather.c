#include <stdio.h>

typedef struct
{
  int y;
  int m;
  int d;
} Date;

Date DateOf(int y, int m, int d)
{
  Date date = {y, m, d};

  return (date);
}

Date After(Date x, int n)
{
  if ((x.d += n) > 30)
  {
    x.m += 1;
    x.d -= 30;
  }
  if (x.m > 12)
  {
    x.y += 1;
    x.m -= 12;
  }
  return (x);
}

int main(void)
{
  Date date;

  date = DateOf(2020, 9, 17);
  date = After(date, 20);

  printf("오늘은 %d 년 %d 월 %d 일 입니다.", date.y, date.m, date.d);
  return (0);
}