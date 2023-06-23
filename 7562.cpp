// #include <iostream>
// #include <queue>
// #include <cstring>
// using namespace std;

// int l;
// int start_x,start_y;
// int dest_x,dest_y;
// int visit[300][300];
// int dx[]={-2,-1,1,2,2,1,-1,-2};
// int dy[]={1,2,2,1,-1,-2,-2,-1};

// void bfs(int start_x, int start_y){
//     if(start_x==dest_x&&start_y==dest_y)
//         return;
//     queue<pair<int,int> > q;
//     q.push(pair<int,int>(start_x,start_y));
//     while(!q.empty()){
//         int x=q.front().first;
//         int y=q.front().second;
//         q.pop();
//         for(int i=0; i<8; i++){
//             int nx=x+dx[i];
//             int ny=y+dy[i];
//             if(nx>=0&&nx<l&&ny>=0&&ny<l){
//                 if(!visit[nx][ny]){
//                     visit[nx][ny]=visit[x][y]+1;
//                     if(nx==dest_x&&ny==dest_y)
//                         return;
//                     q.push(pair<int,int>(nx,ny));
//                 }
//             }
//         }
//     }
// }
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         memset(visit,0,sizeof(visit));
//         cin >> l;
//         cin >> start_x >> start_y;
//         cin >> dest_x >> dest_y;
//         bfs(start_x,start_y);
//         cout << visit[dest_x][dest_y] << "\n";
//     }
// }


#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
int d[300][300];
int dx[] = {-2,-1,1,2,2,1,-1,-2};
int dy[] = {1,2,2,1,-1,-2,-2,-1};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sx,sy;
        cin >> sx >> sy;
        int ex,ey;
        cin >> ex >> ey;
        memset(d,-1,sizeof(d));
        queue<pair<int,int> > q;
        q.push(make_pair(sx,sy));
        d[sx][sy] = 0;
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int k=0; k<8; k++) {
                int nx = x+dx[k];
                int ny = y+dy[k];
                if (0 <= nx && nx < n && 0 <= ny && ny < n) {
                    if (d[nx][ny] == -1) {
                        d[nx][ny] = d[x][y] + 1;
                        q.push(make_pair(nx,ny));
                    }
                }
            }
        }
        cout << d[ex][ey] << '\n';
    }
    return 0;
}

