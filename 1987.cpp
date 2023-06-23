#include <iostream>
#include <algorithm>
using namespace std;

int R,C,ans=0;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
char arr[20][20];
int visit[26];

void go(int depth, int sx, int sy){
    ans=max(ans,depth);

    for(int i=0; i<4; i++){
        int x=sx+dx[i];
        int y=sy+dy[i];
        if(x>=0 && x<R && y>=0 && y<C){
            if(!visit[arr[x][y]-'A']){
                visit[arr[x][y]-'A']=1;
                go(depth+1,x,y);
                visit[arr[x][y]-'A']=0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> R >> C;
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            cin >> arr[i][j];
    visit[arr[0][0]-'A']=1;
    go(1,0,0);
    cout << ans;
}