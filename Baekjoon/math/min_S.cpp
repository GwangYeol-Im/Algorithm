#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool desc(int a, int b)
{
  return a > b;
}

int main(void)
{
  int elem, temp, s;
  vector<int> a;
  vector<int> b;

  cin >> elem;
  for (int i = 0; i < elem; i++)
  {
    cin >> temp;
    a.push_back(temp);
  }

  for (int i = 0; i < elem; i++)
  {
    cin >> temp;
    b.push_back(temp);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), desc);
  s = 0;
  for (int i = 0; i < elem; i++)
  {
    temp = a[i] * b[i];
    s += temp;
  }
  cout << s << '\n';
  return (0);
}