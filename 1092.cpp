#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n;
    vector<int> crain(n);
    for(int i=0; i<n; i++)
        cin >> crain[i];
    cin >> m;
    vector<int> box(m);
    for(int i=0; i<m; i++)
        cin >> box[i];
    sort(crain.begin(),crain.end(),cmp);
    sort(box.begin(),box.end(),cmp);
    if(crain[0]<box[0]){
         cout << -1;
         return 0;
    }
    int ans=0;
    while(1){
        ans++;
        for(int i=0; i<n; i++){
            for(int j=0; j<box.size(); j++){
                if(crain[i]>=box[j]){
                    box.erase(box.begin()+j);
                    break;
                }
            }
        }
        if(box.size()==0)
            break;
    }

    cout << ans;
       
    
}