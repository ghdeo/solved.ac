#include <iostream>
#include <vector>
using namespace std;

int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    for(int i=1; i<n; i++){
        cout << v[0]/GCD(v[0],v[i]) << "/" << v[i]/GCD(v[0],v[i]) << "\n";
    }
}