#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b)
{
  if (a.first < b.first)
    return true;
  else if (a.first == b.first)
    return a.second < b.second ? true : false;
  else
    return false;
}

int main(void)
{
  int n;

  cin >> n;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end(), compare);
  for (int i = 0; i < n; i++)
  {
    cout << v[i].first << ' ' << v[i].second << endl;
  }
  return (0);
}