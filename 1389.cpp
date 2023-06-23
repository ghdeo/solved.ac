#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int N,M;
int arr[101][101];
int visit[101];
int dist[101];
vector<int> v[101];
vector<pair<int,int> > ans; // person, bacon

void bfs(int node){
    visit[node]=1;
    queue<int> q;
    q.push(node);
    int sum=0;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0; i<v[x].size(); i++){
            int next=v[x][i];
            if(!visit[next]){
                visit[next]=1;
                dist[next]=dist[x]+1;
                sum+=dist[next];
                q.push(next);
            }
        }
    }
    ans.push_back(make_pair(node,sum));
}
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second)
        return a.first<b.first;
    else
        return a.second<b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    int a,b;
    for(int i=0; i<M; i++){
        cin >> a >> b;
        if(arr[a][b]!=0)
            continue;
        arr[a][b]=arr[b][a]=1;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=1; i<=N; i++){
        memset(visit,0,sizeof(visit));
        memset(dist,0,sizeof(dist));
        bfs(i);
    }

    sort(ans.begin(),ans.end(),cmp);
    cout << ans.front().first;
}