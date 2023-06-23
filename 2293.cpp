// #include <iostream> //동전 1 //https://www.acmicpc.net/problem/2293
// using namespace std; //메모리 초과 fail

// int coin[101];
// int dp[101][10001]; //n번 동전 사용해서 가치 value를 만드는 방법의 가지 수
// int main(){
//     int n,value;
//     cin >> n >> value;
//     for(int i=1; i<=n; i++)
//         cin >> coin[i];
//     dp[0][0]=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=value; j++){
//             if(j>=coin[i]){
//                 int k=1;
//                 while(j>=coin[i]*k){
//                     if(dp[i-1][j-coin[i]*k]!=0||j%coin[i]==0)
//                         dp[i][j]+=dp[i-1][j-coin[i]*k]+1;
//                     k++;
//                 }
//             }
//         }
//     }
//     cout << dp[n][value];
// }

#include <iostream>
using namespace std;

int coin[101];
int dp[10001];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        cin >> coin[i];
    dp[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=coin[i]; j<=m; j++){
            dp[j]+=dp[j-coin[i]];
        }
    }
    cout << dp[m];
}