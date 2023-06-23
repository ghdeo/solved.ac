#include <iostream>
using namespace std;

int main(){
    int k, l;
    cin >> k >> l;

    int div=2;
    while(div<k&&div<l){
        if(k%div==0){
            cout << "BAD " << div;
            return 0;
        }
        div++;
    }
    cout << "GOOD";
}