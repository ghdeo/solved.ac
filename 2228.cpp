#include <iostream>
#include <cstring>

#define MIN -3276800
using namespace std;

int n, m;
int arr[101];
int dp[101][51];

int solve(int n, int m) {
    if (m == 0) {
        return 0;
    }
    if (n <= 0) {
        return MIN;
    }
    if (dp[n][m] != -1) {
        return dp[n][m];
    }

    int sum = 0;
    dp[n][m] = solve(n - 1, m);
    for (int i = n; i > 0; i--) {
        sum += arr[i];
        int tmp = solve(i - 2, m - 1) + sum;
        dp[n][m] = max(dp[n][m], tmp);
    }

    return dp[n][m];
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    memset(dp, -1, sizeof(dp));

    cout << solve(n, m) << "\n";
}