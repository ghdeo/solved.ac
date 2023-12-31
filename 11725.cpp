#include <iostream>
#include <vector>
using namespace std;

vector<int> v[100001];
int visit[100001];
int ans[100001];
void dfs(int node){
    visit[node]=1;
    for(int i=0; i<v[node].size(); i++){
        int next=v[node][i];
        if(!visit[next]){
            ans[next]=node;
            dfs(next);
        }
    }
}
int main(){
    int n;
    cin >> n;
    int x,y;
    for(int i=0; i<n-1; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    for(int i=2; i<=n; i++)
        cout << ans[i] << "\n";
}