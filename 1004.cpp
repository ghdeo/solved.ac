#include <iostream>
#include <cmath>
using namespace std;

int planet[50][3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--){
        int sx,sy,gx,gy;
        cin >> sx >> sy >> gx >> gy;
        int n;
        cin >> n;
        
        int ans=0;
        int a,b,r;
        for(int i=0; i<n; i++){
            cin >> a >> b >> r;
            int s,g;
            s=pow((sx-a),2)+pow((sy-b),2);
            g=pow((gx-a),2)+pow((gy-b),2);
            if(s<r*r&&g<r*r)
                continue;
            else if(s<r*r||g<r*r)
                ans++;
        }
        cout << ans << "\n";
    }
}