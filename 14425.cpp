#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    string s;
    map<string,int> mp;
    for(int i=0; i<n; i++){
        cin >> s;
        mp.insert(make_pair(s,i));
    }
    int ans=0;
    for(int i=0; i<m; i++){
        cin >> s;
        if(mp.find(s)!=mp.end())
            ans++;
    }
    cout << ans;
}