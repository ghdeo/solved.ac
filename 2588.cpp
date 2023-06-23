#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int n3, n4, n5, n6;
    n3 = a * (b % 10);
    n4 = a * ((b / 10) % 10);
    n5 = a * (b / 100);

    n6 = n3 + n4 * 10 + n5 * 100;

    cout << n3 << "\n" << n4 << "\n" << n5 << "\n" << n6;
}