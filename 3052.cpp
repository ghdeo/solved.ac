#include <iostream>
using namespace std;

int main(){
    int comp[42] = {0};
    int n;
    for(int i = 0; i < 10; i++){
        cin >> n;
        comp[n % 42] = 1;
    }
    int count = 0;
    for(int i = 0; i < 42; i++){
        if(comp[i]==1) count++; 
    }
    cout << count;
}