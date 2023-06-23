#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;

int N,M,X;
pair<int,int> arr[14];
vector<pair<int,int>> chicken;
vector<pair<int,int>> house;
int ans=INT_MAX;

void go(int depth, int start){
    if(depth==M){
        int ret=0;
        for(int i=0; i<house.size(); i++){
            int min = abs(house[i].first - arr[0].first)+abs(house[i].second - arr[0].second);
            for(int j=1; j<M; j++){
                int tmp = abs(house[i].first - arr[j].first)+abs(house[i].second - arr[j].second);
                if(min>tmp)
                    min=tmp;
            }
            ret+=min;
        }
        if(ans>ret)
            ans=ret;
        return;
    }
    for(int i=start; i<chicken.size(); i++){
        arr[depth]=chicken[i];
        go(depth+1,i+1);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++){
            cin >> X;
            if(X==1)
                house.push_back(make_pair(i,j));
            else if(X==2)
                chicken.push_back(make_pair(i,j));
        }
    go(0,0);
    cout << ans;
}

