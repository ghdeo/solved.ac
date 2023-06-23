#include <iostream>
#include <algorithm>
using namespace std;

int glass[10001];
int d[10001][3];
int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
        cin >> glass[i];
    for(int i=0; i<=n; i++){
        d[i][0]+=max(d[i-1][0],max(d[i-1][1],d[i-1][2]));
        d[i][1]+=d[i-1][0]+glass[i];
        d[i][2]+=d[i-1][1]+glass[i];
    }
    cout << max(d[n][0],max(d[n][1],d[n][2])) << "\n";
}