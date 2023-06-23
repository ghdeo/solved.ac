#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sorting(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<pair<int, int> > v;
        int tmp;
        int sum=0;
        for(int i=0; i<n; i++){
            cin >> tmp;
            sum+=tmp;
            v.push_back(pair<int, int>(tmp, i+1));
        }
        sort(v.begin(),v.end(),sorting);
        if(v[0].first==v[1].first)
            cout << "no winner\n";
        else if(2*v[0].first>sum)
            cout << "majority winner " << v[0].second << "\n";
        else
            cout << "minority winner " << v[0].second << "\n";
    }
}