#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int s;
int dist[1001][1001];

void bfs(int start){
    dist[start][0]=0;
    queue<pair<int,int> > q; //current display, current clip
    q.push(pair<int,int>(start,0));
    while(!q.empty()){
        int screen=q.front().first;
        int clip=q.front().second;
        q.pop();
        if(dist[screen][screen]==-1){
            dist[screen][screen]=dist[screen][clip]+1;
            q.push(pair<int,int>(screen,screen));
        }
        if(screen+clip<=s&&dist[screen+clip][clip]==-1){
            dist[screen+clip][clip]=dist[screen][clip]+1;
            q.push(pair<int,int>(screen+clip,clip));
        }
        if(screen-1>=0&&dist[screen-1][clip]==-1){
            dist[screen-1][clip]=dist[screen][clip]+1;
            q.push(pair<int,int>(screen-1,clip));
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> s;
    memset(dist,-1,sizeof(dist));
    bfs(1);
    int ans=-1;
    for(int i=0; i<s; i++){
        if(dist[s][i]!=-1){
            if(ans==-1||ans>dist[s][i])
                ans=dist[s][i];
        }
    }
    cout << ans;
}