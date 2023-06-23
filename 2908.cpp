#include <iostream>
#include <string>
using namespace std;

void myswap(string& n){
    string temp;
    temp = n[0];
    n[0] = n[2];
    n[2] = temp[0];
}

string isbiger(string a, string b){
    if(a[0] > b[0]) return a;
    else if(a[0] == b[0] && a[1] > b[1]) return a;
    else if(a[0] == b[0] && a[1] == b[1] && a[2] > b[2]) return a;
    else return b;
}
int main(){
    string a, b;

    cin >> a >> b;
    myswap(a);
    myswap(b);

    cout << isbiger(a,b);
}