#include <iostream>
using namespace std;

long long P[101];
int main(){
    P[1]=P[2]=P[3]=1;
    P[4]=P[5]=2;
    for(int i=6; i<=100; i++){
        P[i]=P[i-1]+P[i-5];
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << P[n] << "\n";
    }
}