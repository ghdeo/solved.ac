#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n; 
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    
    vector<int> d(n);
    d[0]=v[0];
    for(int i=1; i<n; i++){
        d[i]=v[i];
        if(d[i]<d[i-1]+d[i])
            d[i]+=d[i-1];
    }
    int max=d[0];
    for(int i=0; i<n; i++)
        if(max<d[i])
            max=d[i];

    cout << max << "\n";
}