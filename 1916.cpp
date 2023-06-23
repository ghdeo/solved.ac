#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int N,M,from,to;
vector<pair<int,int>> bus[1001];
int dist[1001];

void go(){
    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(0,from));
    dist[from]=0;

    while(!pq.empty()){
        int cost = -pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        if(dist[cur]<cost)
                continue;
        
        for(int i=0; i<bus[cur].size(); i++){
            int next = bus[cur][i].first;
            int ncost = bus[cur][i].second+cost;
            if(dist[next]>ncost){
                dist[next] = ncost;
                pq.push(make_pair(-ncost,next));
            }
        }
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> M;
    int a,b,c;
    for(int i=0; i<M; i++){
        cin >> a >> b >> c;
        bus[a].push_back(make_pair(b,c));
    }
    cin >> from >> to;
    memset(dist,98765432,sizeof(dist));
    go();
    cout << dist[to];
}