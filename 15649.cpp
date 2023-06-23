#include <iostream>
using namespace std;

bool check[10];
int ans[10];
void NM(int idx, int n, int m){
    if(idx==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=1; i<=n; i++){
        if(check[i])
            continue;
        check[i] = true;
        ans[idx] = i;
        NM(idx+1,n,m);
        check[i] = false;
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    NM(0,n,m);    
}