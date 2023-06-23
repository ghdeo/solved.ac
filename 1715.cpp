#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int dp[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,tmp;
    cin >> n;
    priority_queue<int,vector<int>,greater<int> > pq;
    for(int i=0; i<n; i++){
        cin >> tmp;
        pq.push(tmp);
    }
    int ans=0;
    while(pq.size()>1){
        int a,b;
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        ans+=a+b;
        pq.push(a+b);
    }
    cout << ans;
}