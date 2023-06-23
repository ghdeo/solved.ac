#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int n,m,r;
vector<int> v[100001];
int visit[100001];

void dfs(int node,int depth){
    visit[node]=depth;
    sort(v[node].begin(),v[node].end());
    for(int i=0; i<v[node].size(); i++){
        if(visit[v[node][i]]==-1)
            dfs(v[node][i],depth+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> r;
    int a,b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(visit+1,-1,n*sizeof(int));
    dfs(r,0);
    for(int i=1; i<=n; i++)
        cout << visit[i] << "\n";
}