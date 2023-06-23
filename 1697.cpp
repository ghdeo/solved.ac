#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n,k;
int visit[200001];
void bfs(int node){
    visit[node]=1;
    queue<int> q;
    q.push(node);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        int nx[]={x+1,x-1,x*2};
        for(int i=0; i<3; i++){
            if(nx[i]>=0&&nx[i]<=200000){
                if(!visit[nx[i]]){
                    visit[nx[i]]=visit[x]+1;
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
    cout << visit[k]-1;
}