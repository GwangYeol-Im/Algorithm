#include <iostream>

using namespace std;

int main(void)
{
  int pay, cnt, temp, flag;
  int change = 500;

  cin >> pay;
  pay = 1000 - pay;
  cnt = 0;
  flag = 1;
  while (pay)
  {
    temp = pay / change;
    cnt += temp;
    pay -= (temp * change);
    if (flag == 1)
      change /= 5;
    else
      change /= 2;
    flag *= -1;
  }
  cout << cnt << '\n';
  return (0);
}