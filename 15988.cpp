#include <iostream>
#define MAX 1000001
using namespace std;
const long long mod = 1000000009;

long long d[MAX];
int main(){
    d[0]=1;
    for(int i=0; i<MAX; i++){
        if(i-1>=0)
            d[i]+=d[i-1];
        if(i-2>=0)
            d[i]+=d[i-2];
        if(i-3>=0)
            d[i]+=d[i-3];
        d[i]%=mod;
    }

    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << d[n] << "\n";
    }
}