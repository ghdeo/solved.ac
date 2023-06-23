#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main(){
    int n,s,ans;
    cin >> n >> s;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        v[i]=abs(v[i]-s);
    }
    ans=GCD(v[0],v[1]);
    for(int i=2; i<n; i++){
        ans=GCD(v[i],ans);
    }
    cout << ans << "\n";

}