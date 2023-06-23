#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string,int> name;
vector<string> ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int count=0;
    string tmp;
    for(int i=0; i<n; i++){
        cin >> tmp;
        name.insert(make_pair(tmp,1));
    }
    for(int i=0; i<m; i++){
        cin >> tmp;
        if(name.find(tmp)!=name.end()){
            count++;
            ans.push_back(tmp);
        }
    }
    sort(ans.begin(),ans.end());
    vector<string>::iterator iter;
    cout << count << "\n";
    for(iter=ans.begin(); iter!=ans.end(); iter++)
        cout << iter->data() << "\n";

        
}