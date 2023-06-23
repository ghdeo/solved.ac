#include <iostream>
using namespace std;

int main(){
    int n, ans1, ans2;
    cin >> n;

    ans1=n*0.78;
    ans2=n*0.8+(double)n*0.2*0.78;

    cout << ans1 << " " << ans2; 

}