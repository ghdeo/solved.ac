#include <iostream>
using namespace std;

int main(){
    int tmp, sum=0;
    int hour, minute;

    for (int i = 0; i < 4; i++)
    {
        cin >> tmp;
        sum+=tmp;
    }
    
    hour=sum/60;
    minute=sum%60;

    cout << hour << "\n" << minute;
}