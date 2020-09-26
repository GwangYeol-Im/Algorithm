#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
  int temp, n;
  vector<int> divisors;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    divisors.push_back(temp);
  }
  sort(divisors.begin(), divisors.end());
  cout << divisors.front() * divisors.back() << '\n';

  return (0);
}