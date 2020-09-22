#include <iostream>

using namespace std;

int main(void)
{
  bool primes[10001];
  int n, a, b, case_n;

  cin >> case_n;

  while (case_n--)
  {
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
      primes[i] = true;
    }
    for (int i = 2; i * i <= n; i++)
    {
      if (primes[i])
      {
        for (int j = i + i; j <= n; j += i)
          primes[j] = false;
      }
    }
    a = n / 2;
    b = n / 2;
    while (1)
    {
      if (a + b == n && primes[a] && primes[b])
      {
        cout << a << ' ' << b << endl;
        break;
      }
      a--;
      b++;
    }
  }
  return (0);
}