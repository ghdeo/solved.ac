#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int n,k;
int visit[200001];
int parent[200001];

void bfs(int node){
    visit[node]=1;
    parent[node]=-1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int nx[]={x-1,x+1,x*2};
        for(int i=0; i<3; i++){
            if(nx[i]>=0&&nx[i]<=200000){
                if(!visit[nx[i]]){
                    visit[nx[i]]=visit[x]+1;
                    parent[nx[i]]=x;
                    if(nx[i]==k)
                        return;
                    q.push(nx[i]);
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    bfs(n);

    stack<int> path;
    path.push(k);
    int idx=k;
    while(1){
        if(parent[idx]==-1)
            break;
        path.push(parent[idx]);
        idx=parent[idx];
    }

    cout << visit[k]-1 << "\n";
    int size=path.size();
    for(int i=0; i<size; i++){
        cout << path.top() << " ";
        path.pop();
    }
}