#include <iostream>
using namespace std;
int arr[1000001];
int dp(int x){
    arr[1]=0;
    for(int i=2; i<=x; i++){
        arr[i]=arr[i-1]+1;
        if(i%2==0){
            int tmp=arr[i/2]+1;
            if(arr[i]>tmp)
                arr[i]=tmp;
        }
        if(i%3==0){
            int tmp=arr[i/3]+1;
            if(arr[i]>tmp)
                arr[i]=tmp;
        }
    }
    return arr[x];
}

int main(){
    int X;
    cin >> X;
    cout << dp(X) << "\n";
}