#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n;
int adj[25][25];
int visit[25][25];
vector<int> ans;
void travers(int x, int y){
    visit[x][y]=1;
    queue<pair<int,int> > q;
    q.push(pair<int,int>(x,y));
    int count=0;
    while(!q.empty()){
        int tmp1=q.front().first;
        int tmp2=q.front().second;
        count++;
        q.pop();
        if(tmp1<n-1&&!visit[tmp1+1][tmp2]&&adj[tmp1+1][tmp2]==1){
            visit[tmp1+1][tmp2]=1;
            q.push(pair<int,int>(tmp1+1,tmp2));
        }
        if(tmp1>0&&!visit[tmp1-1][tmp2]&&adj[tmp1-1][tmp2]==1){
            visit[tmp1-1][tmp2]=1;
            q.push(pair<int,int>(tmp1-1,tmp2));
        }
        if(tmp2<n-1&&!visit[tmp1][tmp2+1]&&adj[tmp1][tmp2+1]==1){
            visit[tmp1][tmp2+1]=1;
            q.push(pair<int,int>(tmp1,tmp2+1));
        }
        if(tmp2>0&&!visit[tmp1][tmp2-1]&&adj[tmp1][tmp2-1]==1){
            visit[tmp1][tmp2-1]=1;
            q.push(pair<int,int>(tmp1,tmp2-1));
        }
    }
    ans.push_back(count);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<n; j++){
            adj[i][j]=s[j]-'0';
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(!visit[i][j]&&adj[i][j]==1){
                cnt++;
                travers(i,j);
            }
        }
    }
    cout << cnt << "\n";
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << "\n";
}