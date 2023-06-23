#include <iostream>
using namespace std;

int N,M;
int r,c,d;
int arr[50][50];
int visit[50][50];
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int cnt=0;

void go(){
    for(int i=0; i<4; i++){
        int next_d = (d+3-i)%4;
        int next_r = r+dx[next_d];
        int next_c = c+dy[next_d];

        if(next_r<0 || next_r>=N || next_c<0 || next_c>=M || arr[next_r][next_c]==1)
            continue;
        if(arr[next_r][next_c]==0 && visit[next_r][next_c]==0){
            visit[next_r][next_c]=1;
            r=next_r;
            c=next_c;
            d=next_d;
            cnt++;
            go();
        }
    }
    int back_idx = d > 1 ? d - 2 : d + 2;
    int back_r = r + dx[back_idx];
    int back_c = c + dy[back_idx];
    if (back_r >= 0 && back_r <= N || back_c >= 0 || back_c <= M){
        if (arr[back_r][back_c] == 0)
        {
            r = back_r;
            c = back_c;
            go();
        }
        else
        {
            cout << cnt << endl;
            exit(0);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    cin >> r >> c >> d;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            cin >> arr[i][j];
    arr[r][c]=1;
    cnt++;
    go();
}