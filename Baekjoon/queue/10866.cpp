#include <iostream>
#include <cstdio>
#include <deque>
#include <string>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, n;
    string str;
    deque<int> dq;

    cin >> T;
    while (T--)
    {
        cin >> str;
        if (str == "push_front")
        {
            cin >> n;
            dq.push_front(n);
        }
        else if (str == "push_back")
        {
            cin >> n;
            dq.push_back(n);
        }
        else if (str == "pop_front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << dq.front() << '\n';
            dq.pop_front();
        }
        else if (str == "pop_back")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
                continue;
            }
            cout << dq.back() << '\n';
            dq.pop_back();
        }
        else if (str == "size")
            cout << dq.size() << '\n';
        else if (str == "empty")
            cout << dq.empty() << '\n';
        else if (str == "front")
            cout << (!dq.empty() ? dq.front() : -1) << '\n';
        else if (str == "back")
            cout << (!dq.empty() ? dq.back() : -1) << '\n';
    }
    return (0);
}