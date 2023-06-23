#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> tree[50];
int visit[50];
int ans,del;
void dfs(int node){
    if(visit[node])
        return;
    visit[node]=1;
    if(tree[node].size()==0||(tree[node].size()==1&&tree[node][0]==del))
        ans++;
    for(int i=0; i<tree[node].size(); i++){
        if(tree[node][i]!=del)
            dfs(tree[node][i]);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,root;
    cin >> n;
    int k;
    for(int i=0; i<n; i++){
        cin >> k;
        if(k==-1)
            root=i;
        else
            tree[k].push_back(i);
    }
    
    cin >> del;
    if(root==del)
        cout << 0 << "\n";
    else{
        dfs(root);
        cout << ans;
    }
}