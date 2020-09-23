#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
  int n, idx = 0;
  vector<char> v;
  stack<int> s;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  for (int i = 1; i <= n; i++)
  {
    s.push(i);
    v.push_back('+');
    while (!s.empty() && s.top() == arr[idx])
    {
      s.pop();
      v.push_back('-');
      idx++;
    }
  }
  if (!s.empty())
  {
    cout << "NO" << endl;
    return (0);
  }
  for (int i = 0; i < n * 2; i++)
    cout << v[i] << '\n';
  return (0);
}