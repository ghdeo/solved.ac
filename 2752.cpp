#include <iostream>
using namespace std;

int main(){
    int max,mid,min;
    cin >> max >> mid >> min;

    int tmp;
    if(max<mid){
        tmp=mid;
        mid=max;
        max=tmp;
    }
    if(max<min){
        tmp=min;
        min=max;
        max=tmp;
    }
    if(mid<min){
        tmp=min;
        min=mid;
        mid=tmp;
    }

    cout << min << " " << mid << " " << max;
}