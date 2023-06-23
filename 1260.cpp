#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n,m,v;
int adj[1001][1001];
int visit[1001];

void dfs(int node){
    visit[node]=1;
    cout << node << " ";
    for(int i=1; i<=n; i++){
        if(!visit[i]&&adj[node][i]==1)
            dfs(i);
    }
}
void bfs(int node){
    visit[node]=1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        
        cout << tmp << " ";
        for(int i=1; i<=n; i++){
            if(!visit[i]&&adj[tmp][i]==1){
                visit[i]=1;
                q.push(i);
            }
                
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> v;
    int a,b;
    for(int i=1; i<=m; i++){
        cin >> a >> b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    memset(visit+1,0,n*sizeof(int));
    dfs(v);
    cout << "\n";
    memset(visit+1,0,n*sizeof(int));
    bfs(v);
}