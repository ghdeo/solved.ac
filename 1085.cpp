#include <iostream>
using namespace std;

int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    int a, b, c;

    a = (w-x > x) ? x : w-x;
    b = (h-y > y) ? y : h-y;
    c = a > b ? b : a;
    cout << c;

}