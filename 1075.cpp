#include <iostream>
using namespace std;

int main(){
    int n,f;
    int count=0;
    cin >> n >> f;
    n=n/100;
    n=n*100;

    while(1){
        if(n%f==0)  
            break;
        n++;
    }
    if(n%100<10)
        cout << "0" << n%10;
    else 
        cout << n%100;
}