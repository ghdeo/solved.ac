#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

long long dp[501][501];
int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > matrix(n+1);
    for(int i=1; i<=n; i++)
        cin >> matrix[i].first >> matrix[i].second;
    for(int l=2; l<=n; l++){
        for(int i=1; i<=n-l+1; i++){
            int j=i+l-1;
            dp[i][j]=LLONG_MAX;
            for(int k=i; k<=j-1; k++){
                long long tmp=dp[i][k]+dp[k+1][j]+matrix[i].first*matrix[k].second*matrix[j].second;
                if(tmp<dp[i][j])
                    dp[i][j]=tmp;
            }
        }
    }
    cout << dp[1][n];
}