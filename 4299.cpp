#include <iostream>
using namespace std;

int main(){
    int add, sub;
    cin >> add >> sub;

    int a, b;
    if((add+sub)%2!=0){
        cout << "-1";
    }
    else{
        a=(add+sub)/2;
        b=add-a;
        if(a<0||b<0)
            cout << "-1";
        else
            (a>b) ? cout << a << " " << b : cout << b << " " << a;
    }
}