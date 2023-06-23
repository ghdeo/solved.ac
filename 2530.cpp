#include <iostream>
using namespace std;

int main(){
    int h, m, s, dt;
    cin >> h >> m >> s >> dt;
    
    s += dt;
    m += s / 60;
    h += m / 60;

    s %= 60;
    m %= 60;
    h %= 24;
    
    cout << h << " "<< m << " "<< s;
}