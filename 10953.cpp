#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a,b;
    char c;
    cin >> t;
    while (t--)
    {
        cin >> a >> c >> b;
        cout << a+b << "\n";
    }
}