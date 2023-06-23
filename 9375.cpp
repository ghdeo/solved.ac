#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        map<string,int> m;
        map<string,int>::iterator iter;
        string s1,s2;
        for(int i=0; i<n; i++){
            cin >> s1 >> s2;
            m[s2]++;
        }

        int ans=1;
        for(iter=m.begin(); iter!=m.end(); iter++){
            ans*=iter->second+1;
        }
        cout << ans-1 << "\n";
    }
}