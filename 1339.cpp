#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int N,ans=0;
vector<string> v;
int val[26];

void go(){
    for(int i=0; i<v.size(); i++){
        int pow=1;
        for(int j=v[i].size()-1; j>=0; j--){
            val[v[i][j]-'A']+=pow;
            pow*=10;
        }
    }
    
    sort(val,val+26);
    int num=9;
    for(int i=25; i>=0; i--){
        if(val[i]==0)
            break;
        ans+=val[i]*num;
        num--;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    go();
    cout << ans;
}

