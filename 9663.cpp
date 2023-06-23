#include <iostream>
#include <vector>
using namespace std;

int n,ans;
int row[15];
bool check(int col){
    for(int i=0; i<col; i++){
        if(row[i]==row[col]||abs(row[col]-row[i])==col-i)
            return false;
    }
    return true;
}
void nQueen(int col){
    if(col==n){
        ans++;
        return;
    }
    for(int i=0; i<n; i++){
        row[col]=i;    
        if(check(col))
            nQueen(col+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    nQueen(0);
    cout << ans;
}