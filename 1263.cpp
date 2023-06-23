#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first>b.first;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int> > v(n);
    for(int i=0; i<n; i++)
        cin >> v[i].second >> v[i].first;
    sort(v.begin(),v.end(),cmp);

    int time=v[0].first-v[0].second;
    for(int i=1; i<n; i++){
        if(time>=v[i].first){
            time=v[i].first-v[i].second;
        }
        else{
            time=time-v[i].second;
        }
    }
    if(time<0)
        cout << -1;
    else
        cout << time;
}   