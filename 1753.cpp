#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;

int v,e,start;
int dist[20001];
vector<pair<int,int> > g[20001];

void Dijkstra(int node){
    dist[node]=0;
    priority_queue<pair<int,int> > pq;
    pq.push(make_pair(0,node));
    while(!pq.empty()){
        int cost=-pq.top().first;
        int cur=pq.top().second;
        pq.pop();
        for(int i=0; i<g[cur].size(); i++){
            int next=g[cur][i].first;
            int ncost=g[cur][i].second;
            if(dist[next]>cost+ncost){
                dist[next]=cost+ncost;
                pq.push(make_pair(-dist[next],next));
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> v >> e >> start;
    int a,b,c;

    for(int i=0; i<e; i++){
        cin >> a >> b >> c;
        g[a].push_back(make_pair(b,c));
    }
    for(int i=1; i<=v; i++)
        dist[i]=INF;

    Dijkstra(start);
    for(int i=1; i<=v; i++){
        if(dist[i]==INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }

}