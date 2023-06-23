#include <iostream>
#include <algorithm>
using namespace std;

int val[10];
int ans[10];

void NM(int index, int start, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=start; i<n; i++){
        ans[index]=val[i];
        NM(index+1,i,n,m);
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> val[i];
    sort(val,val+n);

    NM(0,0,n,m);
}