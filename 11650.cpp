#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<pair<int,int> > v;
    int a, b;
    for(int i = 0; i<N; i++){
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }
}