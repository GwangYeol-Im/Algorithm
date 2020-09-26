#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
  int T, len, check;
  char cmp;
  string str;
  vector<string> v;

  cin >> T;
  for (int i = 0; i < T; i++)
  {
    cin >> str;
    v.push_back(str);
  }
  len = v.front().length();
  for (int i = 0; i < len; i++)
  {
    cmp = v[0][i];
    check = 0;
    for (int j = 1; j < T; j++)
    {
      if (v[j][i] != cmp)
      {
        cout << '?';
        check = 1;
        break;
      }
    }
    if (check == 0)
      cout << cmp;
  }
  cout << '\n';
  return (0);
}