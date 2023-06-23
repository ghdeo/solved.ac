#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt=0;
    cnt+=n/5;
    cnt+=n/25;
    cnt+=n/125;
    cout << cnt;
}