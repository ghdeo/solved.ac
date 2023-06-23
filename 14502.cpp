#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int n,m,ans=0;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int arr[8][8];
int tmp[8][8];

void copy(int tmp[8][8], int arr[8][8]){
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			tmp[i][j]=arr[i][j];
}

void bfs(){
	int after[8][8];
	copy(after,tmp);

	queue<pair<int,int>> q;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(after[i][j]==2)
				q.push(make_pair(i,j));
		}
	}
	
	while(q.size()){
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0; i<4; i++){
			int nx=x+dx[i];
			int ny=y+dy[i];

			if(nx>=0&&nx<n&&ny>=0&&ny<m){
				if(after[nx][ny]==0){
					after[nx][ny]=2;
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
	int cnt=0;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(after[i][j]==0) {
				cnt++;
			} 
		}
	}
	ans = max(ans, cnt);
}
void go(int depth){
	if(depth==3){
		bfs();
		return;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(tmp[i][j]==0){
				tmp[i][j]=1;
				go(depth+1);
				tmp[i][j]=0;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> arr[i][j];

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j]==0){
				copy(tmp,arr);
				tmp[i][j]=1;
				go(1);
				tmp[i][j]=0;
			}
		}
	}
    cout << ans;
}