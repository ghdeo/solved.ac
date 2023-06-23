#include <iostream>
#include<algorithm>
using namespace std;

int table[1025][1025];
int dp[1025][1025];
int N, M, ans;
int x;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x1, x2, y1, y2;
	cin >> N >> M;

	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++){
			cin >> x;

			if (i==1 && j==1) 
                dp[i][j] = x;
			else if (i == 1)
				dp[i][j] = x + dp[i][j - 1];
			else if (j == 1)
				dp[i][j] = x + dp[i - 1][j];
			else
				dp[i][j] = x + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
		}
    }

	for (int i = 0; i < M; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		
		ans = dp[x2][y2] - dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
		cout << ans << '\n';
	}
	
}