#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  int low = a > b ? b : a;
  int high = a > b ? a : b;

  return a % b == 0 ? b : gcd(b, a % b);
}

int main(void)
{
  int T, a, b;

  cin >> T;
  while (T--)
  {
    cin >> a >> b;
    cout << ((a * b) / gcd(a, b)) << '\n';
  }
  return (0);
}