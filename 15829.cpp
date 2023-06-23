#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char ch;
    int n;
    cin >> n;
    long long hash = 0;
    long long r = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        hash = (hash + (ch%96)*r)%1234567891;

        r=(r*31)%1234567891;
    }
    cout << hash;
}
