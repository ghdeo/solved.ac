#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    int num;
    map<int,bool> mp;
    for(int i=0; i<n+m; i++){
        cin >> num;
        if(mp[num]==true)
            mp.erase(num);
        else
            mp[num]=true;
    }
    cout << mp.size();
}