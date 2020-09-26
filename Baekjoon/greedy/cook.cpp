#include <iostream>

using namespace std;

int main(void)
{
  int T;
  int button[] = {300, 60, 10};
  int count[3];

  cin >> T;
  for (int i = 0; i < 3; i++)
  {
    count[i] = T / button[i];
    T -= (count[i] * button[i]);
  }
  if (T != 0)
  {
    cout << -1 << '\n';
    return (0);
  }
  for (int i = 0; i < 3; i++)
    cout << count[i] << ' ';
  cout << '\n';
  return (0);
}