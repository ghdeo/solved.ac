#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int block[501][501];

int main(){
    int N, M, B;
    cin >> N >> M >> B;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> block[i][j];
    
    int mintime = 1e9;
    int maxheight = -1;
    
    for (int height = 0; height <= 256; height++){
        int inven=0;
        int remove=0;

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(block[i][j]<height){
                    inven-=block[i][j]-height;
                }
                else{
                    remove+=block[i][j]-height;
                }
            }
        }
        if(remove+B>=inven){
            int time=remove*2+inven;
            if(mintime>=time){
                mintime=time;
                maxheight=height;
            }
        }
    }
    
    cout << mintime << " " << maxheight;

}