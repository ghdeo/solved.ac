#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n,m;
int adj[100][100];
int visit[100][100];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};

void bfs(int x, int y){
    visit[x][y]=1;
    queue<pair<int,int> > q;
    q.push(pair<int,int>(x,y));

    while(!q.empty()){
        int nx,ny;
        nx=q.front().first;
        ny=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            if(nx+dx[i]>=0&&nx+dx[i]<n&&ny+dy[i]>=0&&ny+dy[i]<m){
                if((adj[nx+dx[i]][ny+dy[i]]==1)&&!visit[nx+dx[i]][ny+dy[i]]){
                    visit[nx+dx[i]][ny+dy[i]]=visit[nx][ny]+1;
                    q.push(pair<int,int>(nx+dx[i],ny+dy[i]));
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<m; j++){
            adj[i][j]=s[j]-'0';
        }
    }
    bfs(0,0);
    cout << visit[n-1][m-1];
}