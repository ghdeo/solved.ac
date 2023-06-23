#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int d, h, w;
    cin >> d >> h >> w;

    double a=0;
    a=sqrt((double)d*d/(h*h+w*w));
    
    int height=h*a, width=w*a;
    
    cout << height << " " << width;
}