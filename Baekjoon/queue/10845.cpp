#include <iostream>
#include <cstdio>
#include <string>
#include <queue>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T, n;
    queue<int> q;
    string str;

    cin >> T;
    while (T--)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> n;
            q.push(n);
        }
        else if (str == "pop")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << q.front() << '\n';
            q.pop();
        }
        else if (str == "size")
            cout << q.size() << '\n';
        else if (str == "empty")
            cout << q.empty() << '\n';
        else if (str == "front")
            cout << (!q.empty() ? q.front() : -1) << '\n';
        else if (str == "back")
            cout << (!q.empty() ? q.back() : -1) << '\n';
    }
    return (0);
}