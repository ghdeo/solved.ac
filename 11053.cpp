#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> d(n);
    for(int i=0; i<n; i++){
        d[i]=1;
        for(int j=0; j<i; j++){
            if(v[i]>v[j]&&d[i]<d[j]+1)
                d[i]=d[j]+1;
        }
    }

    int ans=d[0];
    for(int i=1; i<n; i++)
        if(ans<d[i])
            ans=d[i];

    cout << ans;
}