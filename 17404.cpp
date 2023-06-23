#include <iostream>
#include <algorithm>
using namespace std;

int rgb[1001][3];
int d[1001][3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=0; j<3; j++){
            cin >> rgb[i][j];
        }
    }
    
    int ans=1000*1000+1;
    for(int first=0; first<=2; first++){
        for(int i=0; i<=2; i++){
            if(first==i)
                d[1][i]=rgb[1][i];
            else
                d[1][i]=1000*1000+1;
        }
        for(int i=2; i<=n; i++){
            d[i][0]=min(d[i-1][1],d[i-1][2])+rgb[i][0];
            d[i][1]=min(d[i-1][0],d[i-1][2])+rgb[i][1];
            d[i][2]=min(d[i-1][0],d[i-1][1])+rgb[i][2];
        }
        for(int i=0; i<=2; i++){
            if(i==first)
                continue;
            ans=min(ans,d[n][i]);
        }
    }
    cout << ans;
}