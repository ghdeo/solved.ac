#include <iostream>
using namespace std;

long long dp[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> dp[i];
        dp[i]+=dp[i-1];
    }
    int i,j;
    for(int k=0; k<m; k++){
        cin >> i >> j;
        cout << dp[j]-dp[i-1] << "\n";
    }
}