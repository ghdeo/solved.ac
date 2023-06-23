#include <iostream>
using namespace std;
long long mod = 10007;
long long d[1001][10];
int main(){
    int n;
    cin >> n;

    d[0][0]=1;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=9; j++){
            for(int k=0; k<=j; k++){
                d[i][j]+=d[i-1][k];
                d[i][j]%=mod;
            }
        }
    }
    long long sum=0;
    for(int i=0; i<=9; i++){
        sum+=d[n][i];
    }

    cout << sum%mod << "\n";
}