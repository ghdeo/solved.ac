#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans=5;
    long long sum=7;

    for (int i = 2; i <= n; i++)
    {
        ans+=sum;
        sum+=3;
        ans%=45678;
    }
    cout << ans;
}