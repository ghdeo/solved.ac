#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main(){
    int T,a,b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        cout << a*b/GCD(a,b) << "\n";
    }
}