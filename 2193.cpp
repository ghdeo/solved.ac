#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    long long ans;
    long long zero=1, one=0;
    if(n!=1){
        n=n-2;
        while(n--){
            long long tmp=one;
            one=zero;
            zero=tmp+zero;
        }
    }
    ans=zero+one;
    cout << ans;
}

// #include <iostream>
// using namespace std;
// long long arr[91];

// int main(){
//     int n;
//     cin >> n;

//     arr[1]=1;
//     arr[2]=1;
//     for(int i=3; i<=n; i++){
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     cout << arr[n];
// }