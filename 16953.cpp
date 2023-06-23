#include <iostream>
#include <queue>
using namespace std;

int a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> a >> b;
    queue<pair<long long,long long> > q;
    q.push(pair<long long,long long>(a,1));
    
    while(!q.empty()){
        pair<long long,long long> num=q.front();
        q.pop();
        if(num.first==b){
            cout << num.second;
            return 0;
        }
        if(num.first*2<=b){
            q.push(pair<long long,long long>(num.first*2,num.second+1));
        }
        if(num.first*10+1<=b){
            q.push(pair<long long,long long>(num.first*10+1,num.second+1));
        }
    }
    cout << -1;
}