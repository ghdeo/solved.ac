#include <iostream>
using namespace std;
int arr[1000];
int main(){
    int a, b;
    cin >> a >> b;

    int idx=0;
    for(int i=1; i<=1000; i++){
        for(int j=0; j<i && idx<1000; j++){
            arr[idx++]=i;
        }
    }

    int sum=0;
    for(int i=a-1; i<=b-1; i++){
        sum+=arr[i];
    }
    cout << sum;
}