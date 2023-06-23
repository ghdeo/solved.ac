#include <iostream>
using namespace std;
int arr[1001];

int dp(int n){
    arr[0]=1;
    arr[1]=1;
    for(int i=2; i<=n; i++){
        arr[i]=arr[i-1]+2*arr[i-2];
        arr[i]%=10007;
    }
    return arr[n];
}

int main(){
    int n;
    cin >> n;
    cout << dp(n) << "\n";
}