#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int n,m;
int e1,e2;
int visit[501];
vector<int> v[501];
int tree;
bool dfs(int node, int post){
    visit[node]=1;
    for(int i=0; i<v[node].size(); i++){
        int next=v[node][i];
        if(next==post)
            continue;
        if(visit[next]==1)
            return false;
        if(dfs(next,node)==false)
            return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc=0;
    while(1){
        cin >> n >> m;
        if(n==0&&m==0)
            break;
        
        tc++;
        for(int i=0; i<=500; i++){
            visit[i]=0;
            v[i].clear();
        }
        for(int i=0; i<m; i++){
            cin >> e1 >> e2;
            v[e1].push_back(e2);
            v[e2].push_back(e1);
        }
        tree=0;
        for(int i=1; i<=n; i++){
            if(!visit[i]){
                if(dfs(i,0))
                    tree++;
            }
        }

        cout << "Case " << tc << ": ";
        if(tree==0)
            cout << "No trees.\n";
        else if(tree==1)
            cout << "There is one tree.\n";
        else
            cout << "A forest of " << tree << " trees.\n";
    }
}