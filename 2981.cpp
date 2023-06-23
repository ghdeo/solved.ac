#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int gcd=v[1]-v[0];
    for(int i=2; i<n; i++)
        gcd=GCD(gcd,v[i]-v[i-1]);
    
    vector<int> ans;
    for(int i=2; i*i<=gcd; i++){
        if(gcd%i==0){
            ans.push_back(i);
            ans.push_back(gcd/i);
        }
    }
    ans.push_back(gcd);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());
    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
}