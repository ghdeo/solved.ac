#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n,m;
bool flag;
vector<int> v[2000];
int visit[2000];

void dfs(int node,int depth){
    visit[node]=1;
    if(depth==4){
        flag=true;
        return;
    }  
    for(int i=0; i<v[node].size(); i++){
        if(!visit[v[node][i]]){
            visit[v[node][i]]=1;
            dfs(v[node][i],depth+1);
            visit[v[node][i]]=0;
        }            
    }
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            visit[j]=0;
        visit[i]=1;
        dfs(i,0);
        if(flag)
            break;
    }

    if(flag)
        cout << 1;
    else
        cout << 0;
}