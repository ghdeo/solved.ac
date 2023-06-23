#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int v,e;
vector<int> adj[20001];
int visit[20001];
void dfs(int node, int c){
    visit[node]=c;
    for(int i=0; i<adj[node].size(); i++){
        int next=adj[node][i];
        if(visit[next]==0){
            dfs(next,3-c);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    while(k--){
        cin >> v >> e;
        for(int i=1; i<=v; i++){
            adj[i].clear();
            visit[i]=0;
        }
        for(int i=0; i<e; i++){
            int a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        for(int i=1; i<=v; i++){
            if(visit[i]==0)
                dfs(i,1);
        }
        bool flag=true;
        for(int i=1; i<=v; i++){
            for(int j=0; j<adj[i].size(); j++){
                int k=adj[i][j];
                if(visit[i]==visit[k])
                    flag=false;
            }
        }
        if(flag)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}