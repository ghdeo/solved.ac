#include <iostream>
using namespace std;

int main(){
    int ax, ay, az;
    int cx, cy, cz;
    int bx, by, bz;

    cin >> ax >> ay >> az;
    cin >> cx >> cy >> cz;
    bx=cx-az;
    by=cy/ay;
    bz=cz-ax;

    cout << bx << " " << by << " " << bz;
}