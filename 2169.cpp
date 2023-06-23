#include <iostream>
#include <cmath>
#define MAX 1001

using namespace std;

int n, m;
int arr[MAX][MAX];
int dp[MAX][MAX];
int tmp[MAX][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    dp[0][0] = arr[0][0];
    for (int i = 1; i < m; i++) {
        dp[0][i] = dp[0][i - 1] + arr[0][i];
    }
    for (int i = 1; i < n; i++) {
        tmp[0][0] = dp[i - 1][0] + arr[i][0];
        tmp[m - 1][1] = dp[i - 1][m - 1] + arr[i][m - 1];

        for (int j = 1; j < m; j++) {
            tmp[j][0] = max(dp[i - 1][j], tmp[j - 1][0]) + arr[i][j];
        }
        for (int j = m - 2; j >= 0; j--) {
            tmp[j][1] = max(dp[i - 1][j], tmp[j + 1][1]) + arr[i][j];
        }
        for (int j = 0; j < m; j++) {
            dp[i][j] = max(tmp[j][0], tmp[j][1]);
        }
    }

    cout << dp[n - 1][m - 1] << "\n";
}