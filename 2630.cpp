#include <iostream>
#include <cstring>
using namespace std;

int n;
int ans[2]={0,0}; // white, blue;
int board[128][128];
int visit[128][128];
void go(int row, int x, int y){
    int color=board[x][y];
    bool flag=true;
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            if(board[x+i][y+j]!=color){
                flag=false;
                break;
            }
        }
        if(!flag)
            break;
    }
    if(flag){
        ans[color]++;
        for(int i=0; i<row; i++)
            for(int j=0; j<row; j++)
                visit[x+i][y+j]=1;
    }
        
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> board[i][j];
    for(int row=n; row>0; row=row/2){
        for(int i=0; i<n; i=i+row){
            for(int j=0; j<n; j=j+row){
                if(!visit[i][j])
                    go(row,i,j);
            }
        }
    }
    for(int i=0; i<2; i++)
        cout << ans[i] << "\n";
}