#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int L,A,B,C,D;
    cin >> L >> A >> B >> C >> D;

    double korean, math;
    korean=ceil((double)A/C);
    math=ceil((double)B/D);
    
    cout << L-max(korean,math);
}