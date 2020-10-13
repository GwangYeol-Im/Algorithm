#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int a, b, T;

    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return (0);
}