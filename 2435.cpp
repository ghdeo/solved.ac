#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    vector<int> max(n-k+1);
    for(int i=0; i<n-k+1; i++){
        for(int j=0; j<k; j++){
            max[i]+=v[i+j];
        }
    }
    sort(max.begin(),max.end());
    cout << max.back();
}