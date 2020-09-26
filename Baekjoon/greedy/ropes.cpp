#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
  int n, temp, max;
  vector<int> ropes;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    ropes.push_back(temp);
  }
  sort(ropes.begin(), ropes.end());
  max = 0;
  for (int i = 0; i < n; i++)
  {
    temp = ropes[i] * (n - i);
    max = max > temp ? max : temp;
  }
  cout << max << '\n';
  return (0);
}