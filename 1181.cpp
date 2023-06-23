#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compair(string a, string b){
    if(a.size()==b.size()) return a<b;
    else return a.size()<b.size();
}
int main(){
    int n;
    vector<string> v;
    string s;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),compair);
    string tmp;
    for(int i=0; i<n; i++){
        if(tmp==v[i]) continue;
        cout << v[i] << "\n";
        tmp = v[i];
    }
}