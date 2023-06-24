#include <iostream>

using namespace std;

int map[100][100];
long long dp[100][100];

int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;
            for (int k = 0; k < j; k++) {
                if (k + map[i][k] == j) {
                    dp[i][j] += dp[i][k];
                }
            }
            for (int k = 0; k < i; k++) {
                if (k + map[k][j] == i) {
                    dp[i][j] += dp[k][j];
                }
            }
        }
    }

    cout << dp[n - 1][n - 1] << "\n";
}