#include <iostream>
using namespace std;

int main(){
    pair<int, int> location[3];
    for (int i = 0; i < 3; i++)
        cin >> location[i].first >> location[i].second;
    int x,y;
    if(location[0].first==location[1].first)
        x=location[2].first;
    else if(location[1].first==location[2].first)
        x=location[0].first;
    else
        x=location[1].first;
    if(location[0].second==location[1].second)
        y=location[2].second;
    else if(location[1].second==location[2].second)
        y=location[0].second;
    else
        y=location[1].second;
    
    cout << x << " " << y;

    
}