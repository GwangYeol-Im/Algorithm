#include <iostream>

using namespace std;

int main(void)
{
  int T, n, mul, temp;

  cin >> T;
  while (T--)
  {
    cin >> n >> mul;
    temp = 1;
    while (mul--)
    {
      temp = (temp * n) % 10;
    }
    cout << (temp == 0 ? 10 : temp) << '\n';
  }

  return (0);
}