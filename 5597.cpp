#include <iostream>
using namespace std;

bool attendence[31];
int main(){
    int n;
    for(int i=0; i<28; i++){
        cin >> n;
        attendence[n]=true;
    }
    for(int i=1; i<=30; i++){
        if(!attendence[i])
            cout << i << "\n";
    }
}   