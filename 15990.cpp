#include <iostream>
using namespace std;
const long long mod = 1000000009LL;
long long arr[100001][4];

int main(){
    for(int i=1; i<100001; i++){
        if(i-1>=0){
            arr[i][1]=arr[i-1][2]+arr[i-1][3];
            if(i==1)
                arr[i][1]=1;
        }
        if(i-2>=0){
            arr[i][2]=arr[i-2][1]+arr[i-2][3];
            if(i==2)
                arr[i][2]=1;
        }
        if(i-3>=0){
            arr[i][3]=arr[i-3][1]+arr[i-3][2];
            if(i==3)
                arr[i][3]=1;
        }
        arr[i][1]%=mod;
        arr[i][2]%=mod;
        arr[i][3]%=mod;
    }

    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (arr[n][1]+arr[n][2]+arr[n][3])%mod << "\n";
    }
}