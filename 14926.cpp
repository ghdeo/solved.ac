#include <iostream>
using namespace std;

int dp[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 0;
    dp[4] = 2;
    dp[5] = 1;

    for (int i = 6; i <= n; i++) {
        if (dp[i - 5] != 0) {
            dp[i] = dp[i - 5] + 1;
        } else if (dp[i - 2] != 0) {
            dp[i] = dp[i - 2] + 1;
        }
    }
    if (dp[n] == 0) {
        cout << -1;
    } else {
        cout << dp[n];
    }
}