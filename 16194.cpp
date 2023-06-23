#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    vector<int> dp(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
        dp[i]=1000*10000;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            dp[i]=min(dp[i],dp[i-j]+a[j]);
        }
    }

    cout << dp[n];
}