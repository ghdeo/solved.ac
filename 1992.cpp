#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n;
int board[64][64];
queue<char> q;

bool check(int x, int y, int r){
    int cmp=board[x][y];
    for(int i=x; i<x+r; i++){
        for(int j=y; j<y+r; j++){
            if(cmp!=board[i][j])
                return false;
        }
    }
    return true;
}
void go(int x, int y, int r){
    if(r==1){
        q.push(board[x][y]+'0');
        return;
    }
    if(check(x,y,r)==false){
        q.push('(');
        go(x,y,r/2);
        go(x,y+r/2,r/2);
        go(x+r/2,y,r/2);
        go(x+r/2,y+r/2,r/2);
        q.push(')');
    }
    else{
        q.push(board[x][y]+'0');
        return;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        for(int j=0; j<n; j++)
            board[i][j]=s[j]-'0';
    }
    go(0,0,n);
    int size=q.size();
    for(int i=0; i<size; i++){
        cout << q.front();
        q.pop();
    }
}