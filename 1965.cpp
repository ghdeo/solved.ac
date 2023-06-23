#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    int ret=0;
    for(int i=1; i<=n; i++){
        dp[i]=1;
        for(int j=1; j<i; j++){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        ret=max(ret,dp[i]);
    }
    cout << ret;
}