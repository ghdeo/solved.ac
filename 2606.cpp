#include <iostream>
#include <queue>
using namespace std;

int adj[101][101];
int visit[101];
queue<int> q;
int ans;
int n,m;

void dfs(int node){
    visit[node]=1;
    for(int i=1; i<=n; i++){
        if(!visit[i]&&adj[node][i]==1){
            ans++;
            dfs(i);
        }
    }
}
void bfs(int node){
    visit[node]=1;
    for(int i=1; i<=n; i++){
        if(!visit[i]&&adj[node][i]==1){
            ans++;
            visit[i]=1;
            q.push(i);
        }
    }
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        bfs(tmp);
    }
}
void bfs2(int node){
    visit[node]=1;
    queue<int> q2;
    q2.push(node);
    while(!q2.empty()){
        int tmp=q2.front();
        q2.pop();
        for(int i=1; i<=n; i++){
            if(!visit[i]&&adj[tmp][i]==1){
                visit[i]=1;
                q2.push(i);
                ans++;
            }
        }
    }
}
int main(){
    cin >> n >> m;
    int a,b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    //dfs(1);
    //bfs(1);
    bfs2(1);
    cout << ans;
}