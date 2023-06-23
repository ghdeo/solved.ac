#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,tmp;
    cin >> n;
    vector<pair<int,int> >v(n);
    for(int i=0; i<n; i++)
        cin >> tmp >> v[i].first >> v[i].second;
    sort(v.begin(),v.end());
    
    priority_queue<int, vector<int>, greater<int> > room;
    room.push(v[0].second);
    for(int i=1; i<n; i++){
        if(room.top()<=v[i].first){
            room.push(v[i].second);
            room.pop();
        }
        else
            room.push(v[i].second);
    }
    cout << room.size();
}