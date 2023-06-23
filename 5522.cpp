#include <iostream>
using namespace std;

int main(){
    long long tmp, ans=0;

    for (int i = 0; i < 5; i++)
    {
        cin >> tmp;
        ans+=tmp;
    }
    cout << ans;
}