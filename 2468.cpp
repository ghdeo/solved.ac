#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int N,ans;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int g[100][100];
int visit[100][100];

void go(int sink,int sx, int sy){
    visit[sx][sy]=1;
    queue<pair<int,int> > q;
    q.push(make_pair(sx,sy));
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<N&&ny>=0&&ny<N){
                if(g[nx][ny]>sink&&!visit[nx][ny]){
                    visit[nx][ny]=1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int max=0;
    cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            cin >> g[i][j];
            if(g[i][j]>max)
                max=g[i][j];
        }
    
    for(int i=0; i<=max; i++){
        memset(visit,0,sizeof(visit));
        int count=0;
        for(int x=0; x<N; x++){
            for(int y=0; y<N; y++){
                if(!visit[x][y]){
                    if(g[x][y]>i){
                        go(i,x,y);
                        count++;
                    }
                }
            }
        }
        if(ans<count)
            ans=count;
    }
    cout << ans;
}