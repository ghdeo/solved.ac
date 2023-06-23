#include <iostream>
const long long mod = 1000000000;
using namespace std;

int dp[101][10];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=9; i++)
        dp[1][i]=1;
    for(int i=2; i<=n; i++){
        for(int j=0; j<=9; j++){
            dp[i][j]=0;
            if(j-1>=0)
                dp[i][j]+=dp[i-1][j-1];
            if(j+1<=9)
                dp[i][j]+=dp[i-1][j+1];
            dp[i][j]%=mod;
        }
    }
    long long ans=0;
    for(int i=0; i<=9; i++)
        ans+=dp[n][i];
    cout << ans%mod;
}