#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,int> val;
string s[100001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;

    string tmp;
    for(int i=1; i<=n; i++){
        cin >> tmp;
        val.insert(make_pair(tmp,i));
        s[i]=tmp;
    }
        
    for(int i=0; i<m; i++){
        cin >> tmp;
        if(isdigit(tmp[0])){
            int n=stoi(tmp);
            cout << s[n] << "\n";
        }
        else{
            cout << val[tmp] << "\n";
        }
    }
}