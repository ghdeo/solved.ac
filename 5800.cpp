#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int k,n;
    cin >> k;
    for(int i=1; i<=k; i++){
        cin >> n;
        vector<int> v(n);
        for(int j=0; j<n; j++)
            cin >> v[j];
        sort(v.begin(),v.end());
        cout << "Class " << i << "\n";
        cout << "Max " << v.back() << ", ";
        cout << "Min " << v.front() << ", ";
        int gap=0;
        for(int j=0; j<n-1; j++)
            if(gap<v[j+1]-v[j])
                gap=v[j+1]-v[j];
        cout << "Largest gap " << gap << "\n";
    }
}