#include <iostream>
using namespace std;

int unit (int a, int b){
    if(a == 0) return b;
    if(b == 1) return 1;
    else return (unit(a-1,b) + unit(a,b-1));
}

int main(){
    int T;
    cin >> T;
    int a, b;
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        cout << unit(a,b) << "\n";
    }
}