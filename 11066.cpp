// #include <iostream>
// #include <algorithm>
// #include <cstring>
// #include <limits.h>
// using namespace std;

// int T,K;
// int arr[501][501];
// int file[501];
// int sum[501];
// int main(){
//     cin >> T;
//     while(T--){
//         cin >> K;
//         memset(arr,0,sizeof(arr));
//         for(int i=1; i<=K; i++){
//             cin >> file[i];
//             sum[i]=sum[i-1]+file[i];
//         }
            
//         for(int l=1; l <= K; l++){
//             for(int i=1; i <= K-l; i++){
//                 int j=i+l;
//                 arr[i][j]=INT_MAX;
//                 for(int k=i; k < j+l; k++){
//                     arr[i][j] = min(arr[i][j],arr[i][k]+arr[k+1][j]+sum[j]-sum[i-1]);
//                 }
//             }
//         }
//         cout << arr[1][K] << "\n";
//     }
// }


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define INF 1000000000

int T, K;
int sum[501], file[501], dp[501][501];

int main()
{
	cin >> T;

	while (T--)
	{
		cin >> K;
		for (int i = 1; i <= K; i++)
		{
			cin >> file[i];
			sum[i] = sum[i - 1] + file[i];
		}

		for (int i = 1; i <= K; i++)
		{
			for (int j = 1; j <= K - i; j++)
			{
				dp[j][i + j] = INF;
				for (int k = j; k < i + j; k++)
				{
					dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + sum[i + j] - sum[j - 1]);
				}
			}
		}

		cout << dp[1][K] << endl;

	}
}