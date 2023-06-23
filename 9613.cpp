#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main(){
    int T,n;
    long long sum;
    cin >> T;
    
    while(T--){
        sum=0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin >> v[i];
        for(int i=0; i<n-1; i++)
            for(int j=i+1; j<n; j++)
                sum+=GCD(v[i],v[j]);
        cout << sum << "\n";
    }
}