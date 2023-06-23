#include <iostream>
#include <limits.h>
using namespace std;

int arr[100001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int max=0;
    for(int i=0; i<k; i++)
        max+=arr[i];
    int sum=max;
    for(int i=k; i<n; i++){
        sum=sum-arr[i-k]+arr[i];
        if(sum>max)
            max=sum;
    }
    cout << max;
}