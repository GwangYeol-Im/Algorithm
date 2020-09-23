#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int n, cur = 0;
  cin >> n;

  vector<int> digits(n);
  for (int i = 0; i < n; i++)
  {
    cin >> digits[i];
    if (i > 1 && digits[i] < digits[i - 2] && digits[i] > digits[i - 1])
    {
      cout << "NO" << endl;
      return (0);
    }
  }
  for (int push : digits)
  {
    if (push < cur)
      cout << "-" << '\n';
    else
    {
      while (cur < push)
      {
        cout << '+' << '\n';
        cur++;
      }
      cout << '-' << '\n';
    }
  }
  return (0);
}