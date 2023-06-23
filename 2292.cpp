#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int layer, sum = 2;
    for(layer = 0; sum <= n; layer++){
        sum += layer * 6;
    }
    if(n == 1) layer = 1;

    cout << layer;
}