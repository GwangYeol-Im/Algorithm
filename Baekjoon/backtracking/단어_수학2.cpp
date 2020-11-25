#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

#define MAX 10
long ans = 0, sum;
int N, max_a = 0;
int dp[MAX];
string str[MAX];
bool visit[MAX];

void dfs(int idx) {
    if (idx == max_a + 1) {
        sum = 0;
        for (int i = 0; i < N; i++) {
            int temp = 0;
            for (int j = 0; j < str[i].length(); j++)
                temp = temp * 10 + dp[str[i][j] - 'A'];
            sum += temp;
        }
        ans = max(ans, sum);
        return ;
    }
    for (int i = 9 - max_a; i <= 9; i++) {
        if (visit[i]) continue;
        visit[i] = true;
        dp[idx] = i;
        dfs(idx + 1);
        visit[i] = false;
    }
}

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
    dfs(0);
    cout << ans << '\n';
    return (0);
}