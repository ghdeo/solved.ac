#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

struct Edge {
    int to;
    int cost;
    Edge(int to, int cost) : to(to), cost(cost) {
    }
};
vector<Edge> a[100001];
bool check[100001];
int dist[100001];
void dfs(int node) {
    memset(check,false,sizeof(check));
    memset(dist,0,sizeof(dist));
    check[node]=true;
    dist[node]=0;
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(int i=0; i<a[x].size(); i++){
            int next=a[x][i].to;
            if(!check[next]){
                check[next]=true;
                dist[next]=dist[x]+a[x][i].cost;
                q.push(next);
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++) {
        int x;
        scanf("%d",&x);
        while (true) {
            int y, z;
            scanf("%d",&y);
            if (y == -1) break;
            scanf("%d",&z);
            a[x].push_back(Edge(y,z));
        }
    }
    dfs(1);
    int start=-1;
    for(int i=1; i<=n; i++){
        if(start==-1||dist[i]>dist[start])
            start=i;
    }
    dfs(start);
    int ans=dist[start];
    for(int i=1; i<=n; i++){
        if(ans<dist[i])
            ans=dist[i];
    }
    cout << ans;
    return 0;
}

// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// int v;
// vector<pair<int,int> > tree[100001];
// int visit[100001];

// void bfs(int node){
//     visit[node]=0;
//     queue<int> q;
//     q.push(node);
//     while(!q.empty()){
//         int x=q.front();
//         q.pop();
//         for(int i=0; i<tree[x].size(); i++){
//             int next=tree[x][i].first;
//             if(!visit[next]){
//                 visit[next]=visit[x]+tree[x][i].second;
//                 q.push(next);
//             }
//         }
//     }
// }
// void AtoB(int begin, int end){
//     visit[begin]=0;
//     queue<int> q;
//     q.push(begin);
//     while(!q.empty()){
//         int x=q.front();
//         q.pop();
//         if(x==end)
//             break;
//         for(int i=0; i<tree[x].size(); i++){
//             int next=tree[x][i].first;
//             if(!visit[next]){
//                 visit[next]=visit[x]+tree[x][i].second;
//                 q.push(next);
//             }
//         }
//     }
    
// }
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> v;
//     int n;
//     for(int i=0; i<v; i++){
//         cin >> n;
//         int a,b;
//         while(1){
//             cin >> a;
//             if(a==-1)
//                 break;
//             cin >> b;
//             tree[n].push_back(pair<int,int>(a,b));
//         }
//     }
//     bfs(1);
//     int begin=-1;
//     for(int i=1; i<=v; i++){
//         if(begin==-1||begin<visit[i])
//             begin=i;
//     }
//     memset(visit,0,sizeof(visit));
//     bfs(begin);
//     int end=-1;
//     for(int i=1; i<=v; i++){
//         if(end==-1||end<visit[i])
//             end=i;
//     }
//     memset(visit,0,sizeof(visit));
//     AtoB(begin,end);
//     cout << visit[end];
// }