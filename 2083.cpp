#include <iostream>
#include <string>
using namespace std;

int main(){
    while (1)
    {
        string name;
        int age, weight;
        cin >> name >> age >> weight;

        if(name=="#" && age==0 && weight==0)
            break;
        string member="Junior";
        if(age>17||weight>=80)
            member="Senior";
        cout << name << " " << member << "\n";
    
    }
    
}