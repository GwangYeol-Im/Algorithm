#include <iostream>

using namespace std;

void fibonacci(int a, int b, int n, int idx)
{
  if (n == idx)
  {
    cout << b << '\n';
    return;
  }
  fibonacci(b, a + b, n, idx + 1);
}

int main(void)
{
  int a = 0;
  int b = 1;
  int idx = 1;
  int n;

  cin >> n;
  if (n == 0)
  {
    cout << n << '\n';
    return (0);
  }
  fibonacci(a, b, n, idx);
}