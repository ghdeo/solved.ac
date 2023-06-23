#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
long long arr[100001];
int main(){
    cin >> n >> m;

    long long left=-1;
    long long right=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        right+=arr[i];
        left=max(left,arr[i]);
    }
    
    while(left<=right){
        long long mid=(left+right)/2;
        long long blueray=0;
        long long sum=0;
        bool flag=false;
        for(int i=0; i<n; i++){
            if(sum+arr[i]>mid){
                sum=0;
                blueray++;
            }
            sum+=arr[i];
        }
        if(sum!=0)
            blueray++;
        if(blueray<=m)
            right=mid-1;
        else
            left=mid+1;
    }
    cout << left;
}