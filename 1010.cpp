#include <iostream>
using namespace std;

int dp[30][30];
int main(){
    for(int i=1; i<30; i++){
        dp[i][1]=i;
        dp[i][i]=1;
    }
    for(int i=2; i<30; i++){
        for(int j=2; j<30; j++){
            if(i>j)
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
        }
    }
    int n;
    cin >> n;
    while(n--){
        int x,y;
        cin >> y >> x;
        cout << dp[x][y] << "\n";
    }
}
