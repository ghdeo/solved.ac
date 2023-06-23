#include <iostream>
using namespace std;

int main(){
    int x,n;
    cin >> x >> n;
    int a,b,cmp=0;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        cmp+=a*b;
    }
    if(cmp==x)
        cout << "Yes\n";
    else
        cout << "No\n";
}