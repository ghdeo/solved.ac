#include <iostream>
#include <string>
#include <queue>
using namespace std;

int r,c;
int wolf,sheep;
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
char adj[250][250];
int visit[250][250];
void bfs(int x, int y){
    visit[x][y]=1;
    if(adj[x][y]=='#')
        return;
    int w=0,s=0;
    if(adj[x][y]=='v')
        w++;
    else if(adj[x][y]=='o')
        s++;
    queue<pair<int,int> > q;
    q.push(pair<int,int>(x,y));
    
    while(!q.empty()){
        int bx=q.front().first;
        int by=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx=bx+dx[i];
            int ny=by+dy[i];
            if(nx>=0&&nx<r&&ny>=0&&ny<c&&!visit[nx][ny]&&adj[nx][ny]!='#'){
                if(adj[nx][ny]=='v')
                    w++;
                else if(adj[nx][ny]=='o')
                    s++;
                visit[nx][ny]=1;
                q.push(pair<int,int>(nx,ny));
            }
        }
    }
    if(w>=s)
        sheep-=s;
    else
        wolf-=w;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> r >> c;
    for(int i=0; i<r; i++){
        string s;
        cin >> s;
        for(int j=0; j<c; j++){
            adj[i][j]=s[j];
            if(s[j]=='v')
                wolf++;
            else if(s[j]=='o')
                sheep++;
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(!visit[i][j]){
                bfs(i,j);
            }
        }
    }
    cout << sheep << " " << wolf;
}