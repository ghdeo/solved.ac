#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int top, mid, bot, coke, soda;
    cin >> top >> mid >> bot >> coke >> soda;

    int hambg, bev;

    hambg=min(top,mid);
    hambg=min(hambg,bot);

    bev=min(coke,soda);

    cout << hambg+bev-50;
}