#include <iostream>
using namespace std;

int main(){
    int n,m,k;
    cin >> n >> m >> k;

    int max_O;
    int max_X;
    if(m<=k){
        max_O=m;
        max_X=n-k;
    }
    else{
        max_O=k;
        max_X=n-m;
    }
    cout << max_O+max_X;
}