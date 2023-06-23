#include <iostream>
using namespace std;
int arr[1000001];
int dp(int x){
    if(x==1)
        return 0;
    if(arr[x]>0)
        return arr[x];
    arr[x]=dp(x-1)+1;
    if(x%2==0){
        int tmp=dp(x/2)+1;
        if(arr[x]>tmp)
            arr[x]=tmp;
    }
    if(x%3==0){
        int tmp=dp(x/3)+1;
        if(arr[x]>tmp)
            arr[x]=tmp;
    }
    return arr[x];
}

int main(){
    int X;
    cin >> X;
    cout << dp(X) << "\n";
}