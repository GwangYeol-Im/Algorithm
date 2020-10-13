#include <iostream>
#include <string>

using namespace std;

int main(void)
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

string str;
int T, result;

cin >> T >> str;
result = 0;
for (int i = 0; i < T; i++)
    result += (str[i] - '0');
cout << result << '\n';
return (0);
}