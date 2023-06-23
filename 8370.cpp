#include <iostream>
using namespace std;

int main(){
    int row, col;
    int business, econimic;

    cin >> row >> col;
    business = row*col;
    cin >> row >> col;
    econimic = row*col;

    cout << business+econimic;
}