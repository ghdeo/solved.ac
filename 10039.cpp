#include <iostream>
using namespace std;

int main(){
    int n, m = 0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n <= 40) m += 40;
        else m += n;
    }
    cout << m / 5;
}