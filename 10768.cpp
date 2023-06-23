#include <iostream>
using namespace std;

int main(){
    int month, date;
    cin >> month >> date;

    if(month==2&&date==18)
        cout << "Special\n";
    else if(month==1||(month==2&&date<18))
        cout << "Before\n";
    else 
        cout << "After\n";
}