#include <iostream>
#include <queue>
#include <string>
#include <cstring>

using namespace std;

int n,m;
int maze[100][100];
int dist[100][100];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> m >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<m; j++){
            maze[i][j]=s[j]-'0';
        }
    }
    memset(dist,-1,sizeof(dist));
    dist[0][0]=0;
    queue<pair<int,int> > q;
    queue<pair<int,int> > nq;
    q.push(make_pair(0,0));
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&dist[nx][ny]==-1){
                if(maze[nx][ny]==0){
                    dist[nx][ny]=dist[x][y];
                    q.push(make_pair(nx,ny));
                }
                else{
                    dist[nx][ny]=dist[x][y]+1;
                    nq.push(make_pair(nx,ny));
                }
            }
        }
        if(q.empty()){
            q=nq;
            nq=queue<pair<int,int> > ();
        }
    }
    cout << dist[n-1][m-1];
}