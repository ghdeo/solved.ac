#include <iostream>
#include <algorithm>
using namespace std;

int val[10];
int ans[10];
bool check[10];

void NM(int index, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=0; i<n; i++){
        if(check[i])
            continue;
        check[i]=true;
        ans[index]=val[i];
        NM(index+1,n,m);
        check[i]=false;
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
