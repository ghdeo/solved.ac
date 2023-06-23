#include <iostream>
using namespace std;

int main(){
    int n,ans = 0;
    for(int i = 0; i<5; i++){
        cin >> n;
        ans += n*n;
    }
    ans %= 10;
    cout << ans;
}