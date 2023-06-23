#include <iostream>
#include <algorithm>
using namespace std;

int price[1001][4];
int d[1001][4];
int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            cin >> price[i][j];
        }
    }
    d[1][1]=price[1][1];
    d[1][2]=price[1][2];
    d[1][3]=price[1][3];
    for(int i=2; i<=n; i++){
        d[i][1]+=min(d[i-1][2],d[i-1][3])+price[i][1];
        d[i][2]+=min(d[i-1][1],d[i-1][3])+price[i][2];
        d[i][3]+=min(d[i-1][1],d[i-1][2])+price[i][3];
    }
    cout << min(min(d[n][1],d[n][2]),d[n][3]);
}