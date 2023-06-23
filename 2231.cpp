#include <iostream>
#include <string>
using namespace std;

int main(){
    int num,sum,part;
    cin >> num;

    for (int i = 1; i < num; i++)
    {   
        sum = i;
        part = i;
        while (part){
            sum += part % 10;
            part /= 10;
        }

        if(num == sum){
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}
