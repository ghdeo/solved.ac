#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int calculate(vector<int> v){
    int ans=0;
    for(int i=1; i<v.size(); i++){
        ans+=abs(v[i]-v[i-1]);
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());

    int ans=0;
    do{
        ans=max(ans,calculate(v));
    }
    while(next_permutation(v.begin(),v.end()));

    cout << ans;
}