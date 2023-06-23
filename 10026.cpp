#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n;
char arr[100][100];
int visit[100][100];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

void bfs(int sx, int sy, bool isAmblyopia){
    char s=arr[sx][sy];
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
            if(nx>=0&&nx<n&&ny>=0&&ny<n){
                if(!visit[nx][ny]){
                    if(isAmblyopia){
                        if(s=='R'||s=='G'){
                            if(arr[nx][ny]=='R'||arr[nx][ny]=='G'){
                                visit[nx][ny]=1;
                                q.push(make_pair(nx,ny));
                            }
                        }
                        else{
                            if(arr[nx][ny]==s){
                                visit[nx][ny]=1;
                                q.push(make_pair(nx,ny));
                            }
                        }
                    }
                    else{
                        if(arr[nx][ny]==s){
                            visit[nx][ny]=1;
                            q.push(make_pair(nx,ny));
                        }
                    }
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> arr[i][j];
    
    int ans[2]={0,0};
    for(int k=0; k<2; k++){
        memset(visit,0,sizeof(visit));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(!visit[i][j]){
                    bfs(i,j,k);
                    ans[k]++;
                }
            }
        }
    }
    
    for(int i=0; i<2; i++)
        cout << ans[i] << " ";
    
}
