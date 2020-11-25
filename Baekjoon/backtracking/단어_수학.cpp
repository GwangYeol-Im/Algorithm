#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 10
long ans = 0, sum;
int N, max_a = 0;
string str[MAX];
vector<int> v;

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str[i];
        for (int j = 0; j < str[i].length(); j++)
            max_a = max(max_a, str[i][j] - 'A');
    }
    for (int i = 9 - max_a; i <= 9; i++)
        v.push_back(i);
    do {
        sum = 0;
        for (int i = 0; i < N; i++) {
            int temp = 0;
            for (int j = 0; j < str[i].length(); j++) {
                temp = temp * 10 + v[str[i][j] - 'A'];
            }
            sum += temp;
        }
        ans = max(ans, sum);
    } while (next_permutation(v.begin(), v.end()));
    cout << ans << '\n';
    return (0);
}