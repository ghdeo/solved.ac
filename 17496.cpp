#include <iostream>
using namespace std;

int main(){
    int n,t,c,p;
    cin >> n >> t >> c >> p;

    int ans=((n-1)/t)*c*p;
    cout << ans;
}