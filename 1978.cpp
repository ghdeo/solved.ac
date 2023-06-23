#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    int div = sqrt(n);
    if(n==1) return false;
    while (div)
    {
        if((div!=1)&&(n%div==0)) return false;
        else --div;
    }
    return true;
}
int main(){
    int n,m;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> m;
        if(isPrime(m)) count++;
    }
    cout << count;
}