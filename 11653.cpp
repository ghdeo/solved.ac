#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1)
        return 0;
    int div=2;
    while(1){
        if(n==0||div>n)
            break;
        if(n%div==0){
            cout << div << "\n";
            n/=div;
        }
        else
            div++;
    }
}