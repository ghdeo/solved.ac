#include <iostream>
#include <string>

using namespace std;

int main(){
    int num, k=10;
    cin >> num;
    
    while(num>k){
        int tmp=num%k;
        num-=tmp;
        if(tmp>=5*(k/10))
            num+=k;
        k*=10;
    }
    cout << num;
}