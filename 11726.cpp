#include <iostream>
using namespace std;
int arr[1001];

int dp(int n){
    arr[1]=1;
    arr[2]=2;
    for(int i=3; i<=n; i++){
        arr[i]=arr[i-1]+arr[i-2];
        arr[i]%=10007;
    }
    return arr[n];
}
int main(){
    int n;
    cin >> n;
    cout << dp(n) << "\n";
}