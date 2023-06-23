#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    int input;
    vector<int> v, sorted;
    for(int i=0; i<n; i++){
        cin >> input;
        v.push_back(input);
        sorted.push_back(input);
    }

    sort(sorted.begin(),sorted.end());
    sorted.erase(unique(sorted.begin(),sorted.end()), sorted.end()); // unique returns the first trash values address

    for(int i=0; i<n; i++){
        cout << lower_bound(sorted.begin(),sorted.end(),v[i])-sorted.begin() << " ";
    }
}