#include <iostream>
#include <string>

using namespace std;

void push_stack(int stack[], int &idx)
{
  int n;

  cin >> n;
  stack[idx++] = n;
}

void pop_stack(int stack[], int &idx)
{
  if (idx == 0)
  {
    cout << -1 << endl;
    return;
  }

  cout << stack[idx - 1] << endl;
  idx--;
}

int main(void)
{
  int stack[10000];
  int case_n, idx = 0;
  string str;

  cin >> case_n;
  while (case_n--)
  {
    cin >> str;
    if (str == "push")
      push_stack(stack, idx);
    else if (str == "pop")
      pop_stack(stack, idx);
    else if (str == "top")
      cout << (idx == 0 ? -1 : stack[idx - 1]) << endl;
    else if (str == "size")
      cout << idx << endl;
    else if (str == "empty")
      cout << (idx == 0 ? 1 : 0) << endl;
  }

  return (0);
}