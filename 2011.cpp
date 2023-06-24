#include <iostream>

#define MOD 1000000
using namespace std;
int dp[5001];

int main() {
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        int x = s[i] - '0';
        if (1 <= x && x <= 9) {
            dp[i] += dp[i - 1];
            dp[i] %= MOD;
        }
        if (i == 1) {
            continue;
        }
        if (s[i - 1] == '0') {
            continue;
        }
        x = (s[i - 1] - '0') * 10 + (s[i] - '0');
        if (10 <= x && x <= 26) {
            dp[i] += dp[i - 2];
            dp[i] %= MOD;
        }
    }
    cout << dp[n] << '\n';
    return 0;
}