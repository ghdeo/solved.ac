#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    cin.get();
    int m;
    int sum = 0;
    for(int i = 0; i < n; i++){
        m = cin.get();
        sum += m - 48;
        m = 0;
    }
    cout << sum;
}