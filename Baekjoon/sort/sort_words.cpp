#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a, string b)
{
  int a_len = a.length();
  int b_len = b.length();
  int idx;

  if (a_len == b_len)
  {
    idx = 0;
    while (a[idx])
    {
      if (a[idx] != b[idx])
        return a[idx] < b[idx];
      idx++;
    }
  }
  return (a_len < b_len);
}

int main(void)
{
  int n;
  string word;

  cin >> n;
  vector<string> v;
  for (int i = 0; i < n; i++)
  {
    cin >> word;
    v.push_back(word);
  }
  sort(v.begin(), v.end(), compare);
  cout << v[0] << '\n';
  for (int i = 1; i < n; i++)
  {
    if (v[i] == v[i - 1])
      continue;
    cout << v[i] << '\n';
  }

  return (0);
}