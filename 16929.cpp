#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int n,m;
char adj[50][50];
int visit[50][50];
int dist[50][50];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool bfs(int x, int y, int depth, char color){
    if(visit[x][y])
        return depth-dist[x][y]>=4;
    visit[x][y]=1;
    dist[x][y]=depth;
    for(int i=0; i<4; i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<n&&ny>=0&&ny<m){
            if(adj[nx][ny]==color){
                if(bfs(nx,ny,depth+1,color))
                    return true;
            }
        }
    }
    return false;
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<m; j++)
            adj[i][j]=s[j];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!visit[i][j]){
                memset(dist,0,sizeof(dist));
                if(bfs(i,j,1,adj[i][j])){
                    cout << "Yes\n";
                    return 0;
                }
            }
        }
    }
    cout << "No\n";
    return 0;
}