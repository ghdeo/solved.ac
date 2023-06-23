#include <iostream>
#define MOD 15746
using namespace std;


long long dp[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    dp[1]=1;
    dp[2]=2;
    for(int i=3; i<=n; i++)
        dp[i]=(dp[i-1]+dp[i-2])%MOD;
    
    cout << dp[n];
}