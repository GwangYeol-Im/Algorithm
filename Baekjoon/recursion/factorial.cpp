#include <iostream>

using namespace std;

int factorial(int n)
{
  if (n == 1)
    return (1);
  return n * factorial(n - 1);
}

int main(void)
{
  int n, result;

  cin >> n;
  if (n == 0)
  {
    cout << 1 << endl;
    return (0);
  }
  result = factorial(n);
  cout << result << endl;
  return (0);
}