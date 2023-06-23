#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        v[y].push_back(x);
    }

    long long sum=0;
    int size;
    for(int i=0; i<=n; i++){
        size=v[i].size();
        if(size<=1)
            continue;
        sort(v[i].begin(),v[i].end());
        for(int j=0; j<size; j++){
            if(j==0)
                sum+=v[i][j+1]-v[i][j];
            else if(j==size-1)
                sum+=v[i][j]-v[i][j-1];
            else{
                sum+=min(v[i][j+1]-v[i][j],v[i][j]-v[i][j-1]);
            }
        }
    }

    cout << sum << "\n";
}