#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int N,start_x,start_y;
int a[20][20];
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

struct Fish
{
    int x;
    int y;
    int size;
};

struct cmp
{
    bool operator()(Fish a, Fish b){
        if(a.size==b.size){
            return 
        }
    }
};

queue<pair<int,int>> q;
priority_queue<Fish,vector<Fish>> pq;
void go(){

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++){
            cin >> a[i][j];
            if(a[i][j]==9){
                start_x=i;
                start_y=j;
            }
            else if(a[i][j]!=0){
                Fish k;
                k.size=a[i][j];
                k.x=i;
                k.y=j;
                pq.push(k);
            }
                
        }
            
    
    
}