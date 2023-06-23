#include <iostream>
#include <cstring>
using namespace std;

int t,m,n,k;
int adj[50][50];
int visit[50][50];
void travers(int x, int y){
    visit[y][x]=1;
    if(x>0&&adj[y][x-1]==1&&!visit[y][x-1])
        travers(x-1,y);
    if(x<m-1&&adj[y][x+1]==1&&!visit[y][x+1])
        travers(x+1,y);
    if(y>0&&adj[y-1][x]==1&&!visit[y-1][x])
        travers(x,y-1);
    if(y<n-1&&adj[y+1][x]==1&&!visit[y+1][x])
        travers(x,y+1);
}
int main(){
    cin >> t;
    while(t--){
        memset(adj,0,50*50*sizeof(int));
        memset(visit,0,50*50*sizeof(int));
        cin >> m >> n >> k;
        int x,y;
        for(int i=0; i<k; i++){
            cin >> x >> y;
            adj[y][x]=1;
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(adj[i][j]==1&&!visit[i][j]){
                    cnt++;
                    travers(j,i);
                }
            }
        }
        cout << cnt << "\n";
    }
}