#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,ans=0,mod=10000;
    cin >> n;
    for(int i=0; i<5; i++){
        ans+=pow(n/mod,5);
        n%=mod;
        mod/=10;
    }
    cout << ans;
}