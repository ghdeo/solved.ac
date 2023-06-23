#include <iostream>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long ans=a-b;
    if(ans<0){
        cout << -ans;
    }
    else{
        cout << ans;
    }
}