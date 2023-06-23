#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
bool comp(pair<int,string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    vector<pair<int,string> > v;
    int N, age;
    string name;
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> age >> name;
        v.push_back(pair<int,string>(age, name));
    }

    stable_sort(v.begin(),v.end(), comp);
    for (int i = 0; i < N; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    
}