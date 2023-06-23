#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    int n,k;
    cin >> n >> k;
    int x;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),cmp);
    cout << v[k-1];
}