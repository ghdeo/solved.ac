#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int n,m,ans=1e9+7;
int board[22][22];
int dr[4]={0,0,1,-1};
int dc[4]={1,-1,0,0};
vector<pair<int,int> > coin;

bool isOut(pair<int,int> A){
    if(A.first<1||A.first>n||A.second<1||A.second>m)
        return true;
    return false;
}

void go(int cnt, pair<int,int> A, pair<int,int> B){
    if(ans<cnt)
        return;
    if(cnt>10){
        ans=min(ans,cnt);
        return;
    }
    if(isOut(A)&&isOut(B))
        return;
    else if((isOut(A)&&!isOut(B))||(!isOut(A)&&isOut(B))){
        ans=min(ans,cnt);
        return;
    }

    for(int i=0; i<4; i++){
        pair<int,int> Ai = pair<int,int>(A.first+dr[i],A.second+dc[i]);
        pair<int,int> Bi = pair<int,int>(B.first+dr[i],B.second+dc[i]);
        if(!board[Ai.first][Ai.second])//met wall
            Ai=A;
        if(!board[Bi.first][Bi.second])//met wall
            Bi=B;
        go(cnt+1,Ai,Bi);
    }
}
int main(){
    memset(board,-1,sizeof(board));
    cin >> n >> m;
    string tmp;
    for(int i=1; i<=n; i++){
        cin >> tmp;
        for(int j=0; j<m; j++){
            if(tmp[j]=='o'){
                board[i][j+1]=2;
                coin.push_back(pair<int,int>(i,j+1));
            }
            else if(tmp[j]=='#'){
                board[i][j+1]=0;
            }
            else{
                board[i][j+1]=1;
            }
        }
    }

    go(0,coin[0],coin[1]);
    if(ans>10)
        cout << -1;
    else
        cout << ans;
}