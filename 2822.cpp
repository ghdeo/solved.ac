#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp1(pair<int, int> p1, pair<int, int> p2){
    return p1.first>p2.first;
}
bool cmp2(pair<int, int> p1, pair<int, int> p2){
    return p1.second<p2.second;
}
int main(){
    pair<int, int> arr[8];
    
    for(int i=0; i<8; i++){
        cin >> arr[i].first;
        arr[i].second=i+1;
    }

    int sum=0;
    sort(arr,arr+8,cmp1);
    for(int i=0; i<5; i++){
        sum+=arr[i].first;
    }
    cout << sum << "\n";

    sort(arr,arr+5,cmp2);
    for(int i=0; i<5; i++){
        cout << arr[i].second << " ";
    }

}