#include <iostream>
#include <queue>
using namespace std;

int w,h;
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,1,-1,-1,1,1,-1};
int adj[50][50];
int visit[50][50];
int bfs(int start_x, int start_y){
    visit[start_x][start_y]=1;
    queue<pair<int,int> > q;
    q.push(pair<int,int>(start_x,start_y));
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<8; i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<h&&ny>=0&&ny<w){
                if(!visit[nx][ny]&&adj[nx][ny]==1){
                    visit[nx][ny]=1;
                    q.push(pair<int,int>(nx,ny));
                }
            }
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    while(1){
        cin >> w >> h;
        if(w==0&&h==0)
            break;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin >> adj[i][j];
                visit[i][j]=0;
            }
        }
        int ans=0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(!visit[i][j]&&adj[i][j]==1)
                    ans+=bfs(i,j);
            }
        }
        cout << ans << "\n";
    }
}