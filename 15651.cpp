#include <iostream>
using namespace std;

int ans[10];

void NM(int index, int n, int m){
    if(index==m){
        for(int i=0; i<m; i++)
            cout << ans[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=1; i<=n; i++){
        ans[index]=i;
        NM(index+1,n,m);
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    NM(0,n,m);
}