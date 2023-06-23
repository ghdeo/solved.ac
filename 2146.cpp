// #include <iostream>
// #include <queue>
// #include <cstring>
// using namespace std;

// int n;
// int mat[100][100];
// int group[100][100];
// int visit[100][100];
// int dist[100][100];
// int dx[]={-1,1,0,0};
// int dy[]={0,0,-1,1};

// void makeGroup(int start_x,int start_y, int color){
//     if(visit[start_x][start_y])
//         return;
//     visit[start_x][start_y]=1;
//     group[start_x][start_y]=color;
//     for(int i=0; i<4; i++){
//         int x=start_x+dx[i];
//         int y=start_y+dy[i];
//         if(x>=0&&x<n&&y>=0&&y<n){
//             if(!visit[x][y]&&mat[x][y]==1){
//                 makeGroup(x,y,color);
//             }
//         }
//     }
// }

// // void go(int start_x, int start_y){
// //     visit[start_x][start_y]=1;
// //     queue<pair<int,int> > q;
// //     q.push(pair<int,int>(start_x,start_y));
// //     while(!q.empty()){
// //         int x=q.front().first;
// //         int y=q.front().second;
// //         q.pop();
// //         for(int i=0; i<4; i++){
// //             int nx=x+dx[i];
// //             int ny=y+dy[i];
// //             if(nx>=0&&nx<n&&ny>=0&&ny<n){
// //                 if(group[nx][ny]==group[x][y])
// //                     continue;
// //                 visit[nx][ny]=visit[x][y]+1;
// //                 if(group[nx][ny]!=0&&group[nx][ny]!=group[x][y]){
// //                     if(ans>visit[nx][ny])
// //                         ans=visit[nx][ny];
// //                     return;
// //                 }
// //                 q.push(pair<int,int>(nx,ny));
// //             }
// //         }
// //     }
// // }

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> n;
//     for(int i=0; i<n; i++)
//         for(int j=0; j<n; j++)
//             cin >> mat[i][j];

//     int color=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(mat[i][j]==1&&!visit[i][j]){
//                 makeGroup(i,j,++color);
//             }
//         }
//     }

//     int ans=-1;
//     for(int l=1; l<=color; l++){
//         queue<pair<int,int> > q;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 dist[i][j]=-1;
//                 if(l==group[i][j]){
//                     q.push(pair<int,int>(i,j));
//                     dist[i][j]=0;
//                 }
//             }
//         }

//         while(!q.empty()){
//             int x=q.front().first;
//             int y=q.front().second;
//             q.pop();
//             for(int i=0; i<4; i++){
//                 int nx=x+dx[i];
//                 int ny=y+dy[i];
//                 if(nx>=0&&nx<n&&ny>=0&&ny<n){
//                     if(dist[nx][ny]==-1){
//                         dist[nx][ny]=dist[x][y]+1;
//                         q.push(pair<int,int>(nx,ny));
//                     }
//                 }
//             }
//         }

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 if(mat[i][j]==1&&group[i][j]!=l){
//                     if(ans==-1||ans>dist[i][j]-1)
//                         ans=dist[i][j]-1;
//                 }
//             }
//         }
//     }   

//     cout << ans;
// }

#include <cstdio>
#include <queue>
using namespace std;
int a[100][100];
int g[100][100];
int d[100][100];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main() {
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int cnt = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j] == 1 && g[i][j] == 0) {
                g[i][j] = ++cnt;
                queue<pair<int,int>> q;
                q.push(make_pair(i,j));
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for (int k=0; k<4; k++) {
                        int nx = x+dx[k];
                        int ny = y+dy[k];
                        if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                            if (a[nx][ny] == 1 && g[nx][ny] == 0) {
                                g[nx][ny] = cnt;
                                q.push(make_pair(nx,ny));
                            }
                        }
                    }
                }
            }
        }
    }
    queue<pair<int,int>> q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            d[i][j] = -1;
            if (a[i][j] == 1) {
                q.push(make_pair(i,j));
                d[i][j] = 0;
            }
        }
    }
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
            int nx = x+dx[k];
            int ny = y+dy[k];
            if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                if (d[nx][ny] == -1) {
                    d[nx][ny] = d[x][y] + 1;
                    g[nx][ny] = g[x][y];
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    int ans = -1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<4; k++) {
                int x = i+dx[k];
                int y = j+dy[k];
                if (0 <= x && x < n && 0 <= y && y < n) {
                    if (g[i][j] != g[x][y]) {
                        if (ans == -1 || ans > d[i][j] + d[x][y]) {
                            ans = d[i][j] + d[x][y];
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}