#include <iostream>
using namespace std;

int main(){
    int h, min, duration;
    cin >> h >> min >> duration;

    if(min+duration>=60){
        h=(h+(duration+min)/60)%24;
        min=(duration+min)%60;
    }
    else
        min+=duration;
    cout << h << " " << min;
}