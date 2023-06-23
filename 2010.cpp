#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tmp,sum;
    cin >> sum;
    for(int i=1; i<n; i++){
        cin >> tmp;
        sum+=tmp-1;
    }
    cout << sum;
}