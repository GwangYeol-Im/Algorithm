#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int n, dec, mul, idx;
  vector<int> v;

  cin >> n;
  if (n == 0)
  {
    cout << 0 << '\n';
    return (0);
  }
  dec = 0;
  mul = 0;
  while (n)
  {
    int temp = n % 10;
    for (int i = 0; i < mul; i++)
      temp *= 8;
    dec += temp;
    mul++;
    n /= 10;
  }
  idx = 0;
  while (dec)
  {
    idx++;
    v.push_back(dec % 2);
    dec /= 2;
  }
  for (int i = idx - 1; i >= 0; i--)
    cout << v[i];
  cout << '\n';

  return (0);
}