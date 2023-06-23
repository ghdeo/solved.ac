#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;   
    int row, col;
    row = n/2+1;
    col = n - row +2;
    cout << row*col;
}