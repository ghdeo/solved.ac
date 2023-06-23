#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int arr[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    for(int i=0; i<N; i++)
        cin >> arr[i];
    
    vector<int> v;
    for(int i=0; i<N; i++){
        if(v.empty() || v.back()<arr[i])
            v.push_back(arr[i]);
        else{
            vector<int>::iterator itr = lower_bound(v.begin(),v.end(),arr[i]);
            v[itr-v.begin()]=arr[i];
        }
    }
    cout << v.size();
}