#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t,n;
    cin >> t;
    while(t--){
        long long d[100001][3]={};
        long long score[2][100001]={};   
        cin >> n;

        for(int i=0; i<2; i++){
            for(int j=1; j<=n; j++){
                cin >> score[i][j];
            }
        }

        for(int i=1; i<=n; i++){
            d[i][0]=max(d[i-1][0],max(d[i-1][1],d[i-1][2]));
            d[i][1]=max(d[i-1][0],d[i-1][2])+score[0][i];
            d[i][2]=max(d[i-1][0],d[i-1][1])+score[1][i];
        }

        cout << max(d[n][0],max(d[n][1],d[n][2])) << "\n";
    }


}