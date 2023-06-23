#include <iostream>
using namespace std;

int ans[3];
int board[2187][2187];
void go(int row, int x, int y){
    bool flag=true;
    if(row==0){
        ans[board[x][y]+1]++;
        return;
    }
    for(int i=x; i<row+x; i++){
        for(int j=y; j<row+y; j++){
            if(board[x][y]!=board[i][j]){
                flag=false;
                break;
            }
        }
        if(!flag)
            break;
    }
    if(flag){
        ans[board[x][y]+1]++;
        return;
    }
    else{
        for(int i=x; i<row+x; i=i+row/3){
            for(int j=y; j<row+y; j=j+row/3){
                go(row/3,i,j);
            }
        }        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> board[i][j];

    go(n,0,0);
    for(int i=0; i<3; i++)
        cout << ans[i] << "\n";
}