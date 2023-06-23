#include <iostream>
#include <string>
using namespace std;

int board[4][4];
int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%1d",&board[i][j]);
        }
    }

    int ans=0;
    for(int s=0; s<(1<<(n*m)); s++){//0 가로 1 세로
        int sum=0;
        for(int i=0; i<n; i++){
            int cur=0;//누적 가로 칸수 합
            for(int j=0; j<m; j++){
                int k=i*m+j; //번째 칸
                if((s&(1<<k))==0){
                    cur=cur*10+board[i][j];
                }
                else{
                    sum+=cur;
                    cur=0;
                }
            }
            sum+=cur;
        }
        for(int j=0; j<m; j++){
            int cur=0;
            for(int i=0; i<n; i++){
                int k=i*m+j;
                if((s&(1<<k))!=0){
                    cur=cur*10+board[i][j];
                }
                else{
                    sum+=cur;
                    cur=0;
                }
            }
            sum+=cur;
        }
        if(sum>ans)
            ans=sum;
    }
    cout << ans;
}

