#include <iostream>
#include <algorithm>
using namespace std;

int val[10];
int ans[10];

void NM(int index, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    int tmp=0;
    for(int i=0; i<n; i++){
        if(tmp==val[i])
            continue;
        ans[index]=val[i];
        tmp=ans[index];
        NM(index+1,n,m);
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> val[i];
    sort(val,val+n);

    NM(0,n,m);
}