#include <iostream>
using namespace std;

int n,m;
int adj[1001][1001];
int visit[1001];
void dfs(int node){
    visit[node]=1;
    for(int i=1; i<=n; i++){
        if(!visit[i]&&adj[node][i]==1){
            dfs(i);
        }
    }
} 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    int a,b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(!visit[i]){
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;
}