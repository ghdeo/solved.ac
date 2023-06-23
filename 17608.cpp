#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,tmp;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    int norm=v.back();
    int cnt=1;
    for(int i=n-2; i>=0; i--){
        if(norm<v[i]){
            cnt++;
            norm=v[i];
        }
    }

    cout << cnt;
}