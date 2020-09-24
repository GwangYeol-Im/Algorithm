#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
  int case_n, papers, search, idx, ipt, print;

  cin >> case_n;
  while (case_n--)
  {
    cin >> papers >> search;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    print = 0;
    for (int i = 0; i < papers; i++)
    {
      cin >> ipt;
      q.push({i, ipt});
      pq.push(ipt);
    }
    while (1)
    {
      idx = q.front().first;
      ipt = q.front().second;
      q.pop();
      if (ipt == pq.top())
      {
        pq.pop();
        print++;
        if (idx == search)
        {
          cout << print << '\n';
          break;
        }
      }
      else
        q.push({idx, ipt});
    }
  }
}