#include <iostream>
using namespace std;

int main(){
    int l,p;
    cin >> l >> p;

    int num = l*p;
    int jn[5];

    for(int i = 0; i<5; i++){
        cin >> jn[i];
    }
    for(int i = 0; i<5; i++){
        cout << jn[i]-num << " ";
    }
}