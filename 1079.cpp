#include <iostream>
using namespace std;

int main(){
    int date;
    int car[5];
    int count=0;

    cin >> date;
    for (int i = 0; i < 5; i++){
        cin >> car[i];
        if(car[i]==date)
            count++;
    }

    cout << count;
}