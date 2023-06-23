#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> subway[3001];
int visit[3001]; //0:not visit 1:visit 2:cycle
int dist[3001];
int dfs(int node, int prevnode){//-2:cycle, not included //-1: not found //0~n-1:cycle start idx
    if(visit[node]==1){
        return node;
    }
    visit[node]=1;
    for(int i=0; i<subway[node].size(); i++){
        int next=subway[node][i];
        if(prevnode==next)
            continue;
        int res=dfs(next,node);
        if(res==-2)
            return -2;
        if(res>=0){
            visit[node]=2;
            if(res==node)
                return -2;
            else
                return res;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        subway[a].push_back(b);
        subway[b].push_back(a);
    }
    dfs(1,0);
    queue<int> q;
    for(int i=1; i<=n; i++){
        if(visit[i]==2){
            dist[i]=0;
            q.push(i);
        }
        else
            dist[i]=-1;
    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0; i<subway[x].size(); i++){
            int next=subway[x][i];
            if(dist[next]==-1){
                q.push(next);
                dist[next]=dist[x]+1;
            }
        }
    }
    for(int i=1; i<=n; i++)
        cout << dist[i] << " ";
}