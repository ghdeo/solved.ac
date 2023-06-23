#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n,c;
    cin >> n >> c;
    vector<int> house(n);
    for(int i=0; i<n; i++)
        cin >> house[i];
    sort(house.begin(),house.end());

    int left=0,right=house[n-1];
    while(left<=right){
        int mid=(left+right)/2;
        int sum=1;
        int idx=0;
        for(int i=1; i<n; i++)
            if(house[i]-house[idx]>=mid){
                sum++;
                idx=i;
            }
        if(sum>=c)
            left=mid+1;
        else
            right=mid-1;
    }
    cout << right;
}